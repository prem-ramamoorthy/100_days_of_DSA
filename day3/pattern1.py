def middleTrianglePattern(number):
    for i in range(1,number+1):
        for j in range(number - i):
            print(" ",end=" ")
        for l in range(i*2 -1):
            print("*",end=" ")
        for k in range(number - i):
            print(" " , end = " ")
        print()

def middleTrianglePatternOpposite(number) :
    for i in range(number, 0, -1):
        for j in range(number - i):
            print(" ",end=" ")
        for l in range(i*2 -1):
            print("*",end=" ")
        for k in range(number - i):
            print(" " , end = " ")
        print()

number = int(input("Enter the Number :"))
middleTrianglePattern(number)
print()
middleTrianglePatternOpposite(number)