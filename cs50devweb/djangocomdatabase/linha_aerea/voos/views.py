from django.shortcuts import render
#from django import forms
from django.http import HttpResponseRedirect
#from django.shortcuts import render
from django.urls import reverse
from .models import Voo, Viajante

# Create your views here.
def index(request):
    return render(request, "voos/index.html",{
        "voos": Voo.objects.all()
    })

def voo(request, voo_id):
    voo = Voo.objects.get(id=voo_id)
    viajantes = voo.viajantes.all()
    nao_viajantes = Viajante.objects.exclude(voos=voo).all()
    return render(request, "voos/voo.html", {
        "voo": voo,
        "viajantes": viajantes,
        "nao_viajantes": nao_viajantes
    })

def reserva(request, voo_id):
    #Para um Post request, add um novo voo
    if request.method =="POST":
        #Acessando o voo
        voo = Voo.objects.get(pk=voo_id)
        # Encontrando o viajante id do formulario de dados submitado(enviado)
        viajante_id = int(request.POST["viajante"])
        #Enconttrando o viajante baseado no id
        viajante = Viajante.objects.get(pk=viajante_id)
        #Adcionar viajante ao voo
        viajante.voos.add(voo)

        #Redirecionando usuario para pagina de voo
        return HttpResponseRedirect(reverse("voo", args=(voo.id,)))
