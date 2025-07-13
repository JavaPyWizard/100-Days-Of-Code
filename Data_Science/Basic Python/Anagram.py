# Check if Two Strings Are Anagrams

def isAnagram(s1, s2):
    s1 = s1.replace(" ", "").lower()
    s2 = s2.replace(" ", "").lower()

    if len(s1) != len(s2):
        return False

    freq = {}

    for char in s1:
        freq[char] = freq.get(char, 0) + 1

    for char in s2:
        if char not in freq or freq[char] == 0:
            return False
        freq[char] -= 1

    return True


s1 = input("Enter String 1:")
s2 = input("Enter String 2:")
if (isAnagram(s1,s2)):
    print(s1,"and",s2,"are Anagram.")
else:
    print(s1,"and",s2,"are not Anagram.")