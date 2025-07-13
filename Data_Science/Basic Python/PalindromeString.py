# Check Palindrome String

def isPalindrome(s):
    s = s.lower()
    i = 0
    j = len(s) - 1

    while i < j:
        
        while i < j and not s[i].isalpha():
            i += 1
            
        while i < j and not s[j].isalpha():
            j -= 1
            
        if s[i] != s[j]:
            return False
        i += 1
        j -= 1

    return True


s = input("Enter a string: ")
if isPalindrome(s):
    print("Palindrome")
else:
    print("Not Palindrome")
