from django.contrib import admin


from .models import Voo, Aeroporto, Viajante

# Register your models here.

class VooAdmin(admin.ModelAdmin):
    list_display = ("id", "origem", "destino", "duracao")

class ViajanteAdmin(admin.ModelAdmin):
    filter_horizontal = ("voos",)

admin.site.register(Aeroporto)
admin.site.register(Voo, VooAdmin)
admin.site.register(Viajante, ViajanteAdmin)
