import datetime
from django.shortcuts import render

# Create your views here.
def index(request):
    now = datetime.datetime.now()
    return render(request, "anonovo/index.html", {
       # "anonovo": now.month == 11 and now.day == 10
          "anonovo": True
    })

