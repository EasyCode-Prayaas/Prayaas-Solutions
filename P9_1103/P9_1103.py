string = input("Input the string:")
pos = int(input("Input the position to start extraction:"))
len = int(input("Input the length of substring:"))
x = ""
x+=(string[pos:pos+len])
print(x)


