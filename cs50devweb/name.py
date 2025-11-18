import sys

names = ["Bill", "Charlie", "Fred", "George", "Ginny", "percy"]

name = input("Name: ")

"""for n in names:
    if name == n:
        print("Found")
        sys.exit(0)"""
if name in names:
    print("found")
    sys.exit(0)

print("Not found")
sys.exit(1)
