s = input("Do you agree? ")

#if s == "y" or s == "Y":
#    print("Agreed.")
#elif s== "N" or s == "n":
#   print("Not agreed.")
s= s.lower()
if s in ["y", "yes"]:
    print("Agreed.")
elif s in ["n", "no"]:
    print("Not agreed.")

