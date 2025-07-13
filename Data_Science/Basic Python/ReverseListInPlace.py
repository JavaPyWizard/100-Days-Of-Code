# Reverse a List In-Place

def RevLst(lst):
    i, j = 0, len(lst) - 1
    while i < j:
        lst[i], lst[j] = lst[j], lst[i]
        i += 1
        j -= 1
    return lst

lst = list(map(int, input("Enter numbers separated by spaces: ").split()))
print("Reverse of List:", RevLst(lst))
