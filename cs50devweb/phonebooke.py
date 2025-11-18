people = {
    "Alan": "99173-697",
    "Anderson": "9866-6413"
}


name = input("Name: ")

if name in people:
    number = people[name]
   #print(f"Numeber {people[name]}")
    print(f"Number {number}")
