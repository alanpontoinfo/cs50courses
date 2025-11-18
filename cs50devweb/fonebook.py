import csv



with open("fonebook.csv", "a", newline='') as file:

     nome = input("Nome: ")
     numero = input("Numero: ")


     fieldnames = ["nome", "numero"]

     writer = csv.DictWriter(file, fieldnames=fieldnames)
     writer.writerow({"nome": nome, "numero": numero})


#file = open("fonebook.csv", "a")
#writer = csv.writer(file)
#writer.writerow([nome, numero])


#file.close()
