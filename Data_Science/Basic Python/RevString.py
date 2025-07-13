# Reverse a String

def revString(s):
    #Approach 1
    # temp=[''] * len(s)
    # i,j=0,len(s)-1
    # s=list(s)

    # for c in s:
    #     temp[j]=s[i]
    #     i+=1
    #     j-=1
    
    # return ''.join(temp)

    #Approach 2 (2 pointer)
    s = list(s)
    i, j = 0, len(s) - 1
    while i < j:
        s[i], s[j] = s[j], s[i]
        i += 1
        j -= 1
    return ''.join(s)


s = input("Enter a string: ")
print("Reverse of",s,"is",revString(s))