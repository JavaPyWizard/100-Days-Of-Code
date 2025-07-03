# Count Frequency of All Elements
def freq(lst):
    elementl=[]
    freql=[]

    for i in lst:
        if i not in elementl:
            elementl.append(i)

    for i in elementl:
        c=0
        for j in lst:
            if (i==j):
                c+=1
        
        freql.append(c)

    return elementl,freql


lst = list(map(int,input("Enter numbers separated by spaces: ").split()))
elementl,freql=freq(lst)

for i in range(0,len(elementl)):
    print(elementl[i],":",freql[i])