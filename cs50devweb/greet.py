from sys import argv

"""if len(argv) == 2:
    print(f"hello, {argv[1]}")
else:
    print("hello, word")

for i in range(len(argv)):
    print(argv[i])
for arg in argv:
    print(arg)"""

for arg in argv[1:]:
    print(arg)
