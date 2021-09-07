l = float(input())
b = float(input())
h = float(input())

if(h > 10):
    print("Fridge cannot be passed through the door")
else:
    if (l <= 5 or b <= 5):
        print("The volume of the fridge is:", l*b*h)
    else:
        print("Fridge cannot be passed through door")


