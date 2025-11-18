from django.urls import path

from . import views


urlpatterns = [
    path("", views.index, name="index"),
    path("<int:voo_id>", views.voo, name="voo"),
    path("<int:voo_id>/reserva", views.reserva, name="reserva")
]
