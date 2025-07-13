# Count Vowels and Consonants of String

def countVandC(s):
    s = s.lower()
    vowels = ['a','e','i','o','u']
    v = 0
    c = 0

    for char in s:
        if char.isalpha():
            if char in vowels:
                v+=1
            else:
                c+=1
    
    return v,c


s = input("Enter a string: ")
v , c = countVandC(s)
print("In",s,"\nVowels =",v,"\nConsonants =",c)