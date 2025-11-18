from django.db import models

# Create your models here.

class Aeroporto(models.Model):
    codigo = models.CharField(max_length=3)
    cidade = models.CharField(max_length=64)

    def __str__(self):
        return f"{self.cidade} ({self.codigo})"

class Voo(models.Model):
    origem = models.ForeignKey(Aeroporto, on_delete=models.CASCADE, related_name="embarques")
    destino = models.ForeignKey(Aeroporto, on_delete=models.CASCADE, related_name="desembarques")
    duracao = models.IntegerField()

    def __str__(self):
        return f"{self.id}: {self.origem} to {self.destino}"

class Viajante(models.Model):
    firstname = models.CharField(max_length=64)
    secondname = models.CharField(max_length=64)
    voos = models.ManyToManyField(Voo, blank=True, related_name="viajantes")

    def __str__(self):
         return f"{self.firstname} {self.secondname}"
