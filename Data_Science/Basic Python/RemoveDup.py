# Remove Duplicates From List 

def remDup(lst):
    nlst = []
    for i in lst:
        if i not in nlst:
            nlst.append(i)

    return nlst


lst=list(map(int,input("Enter numbers separated by spaces: ").split()))
print("New List: ",remDup(lst))