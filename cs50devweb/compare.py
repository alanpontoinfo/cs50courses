from cs50 import get_int

x = get_int("x: ")

y = get_int("y: ")

if x < y:
    print("x é meno do que y")
elif x > y:
    print("x é maior do que y")
else:
    print("x é igua a y")
