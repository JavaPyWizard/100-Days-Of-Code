# Find Second Largest Number

def secondLargest(arr):
    first = second = float('-inf')
    
    for num in arr:
        if num > first:
            second = first
            first = num
        elif num > second and num != first:
            second = num

    return second if second != float('-inf') else None


arr = list(map(int, input("Enter numbers separated by spaces: ").split()))
print("Second Largest element in the list: ",secondLargest(arr))