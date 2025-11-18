from django import forms
from django.http import HttpResponseRedirect
from django.shortcuts import render
from django.urls import reverse


# Create your views here
class FormNovaTarefa(forms.Form):
    tarefa = forms.CharField(label="Nova Tarefa")
    priority = forms.IntegerField(label="Priority", min_value=1, max_value=5)
#tarefas = [ "Leitura", "limpeza", "Treino"]
def index(request):

    #Check se lá já existe umas "tarefas" chave em nosso servidor

    if "tarefas" not in request.session:

        #se não,  crie uma nova lista
        request.session["tarefas"] = []

    return render(request, "tarefas/index.html",{
        "tarefas": request.session["tarefas"]
    })

#add uma nova tarefa
def add(request):
    #check se o metodo é Post
    if request.method =="POST":

        #Pegue no dado senviado do usuario e salve ele com form
          form = FormNovaTarefa(request.POST)

        #check se o dado do form é valido(server-side)
          if form.is_valid():

            #isole a tarefa da versão limpa do dado do form
               tarefa = form.cleaned_data["tarefa"]

            #Add a nova tarefa para nossa lista de tarefas
              # tarefas.append(tarefa)
               request.session["tarefas"] += [tarefa]

            #Redirecione o usuaio para lista de tarefas
               return HttpResponseRedirect(reverse("tarefas:index"))

          else:

            #se o form é invalido, re-renderize a pagina com nformção existente
               return render(request, "tarefas/add.html", {
                "form": form
            })

    return render(request, "tarefas/add.html", {
              "form": FormNovaTarefa()
    })
