# Sum of Digits of a Number

def countDigits(n):
    c = 0
    while (n!=0):
        c+=1
        n//=10
    
    return c

n = int(input("Enter a number: "))
print("Number of Digits in",n," =",countDigits(n))