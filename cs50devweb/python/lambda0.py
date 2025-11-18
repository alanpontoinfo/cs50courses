people = [
    {"name": "Harryr", "house": "Gryffin"},
    {"name": "Cho", "house": "Ravenclaw"},
    {"name": "Draco", "house": "Stylther"}
]

#def f(person):
 #  return person["name"]
#people.sort(key=f)

#tranformando em função lambda
people.sort(key=lambda person: person["name"])
print(people)
