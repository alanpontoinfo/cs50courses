from django.urls import path

from . import views

urlpatterns = [
    path("", views.index, name="index"),
    path("alan", views.alan, name="alan"),
    path("anderson", views.anderson, name="anderson"),
    path("<str:name>", views.greet, name="greet")
]

