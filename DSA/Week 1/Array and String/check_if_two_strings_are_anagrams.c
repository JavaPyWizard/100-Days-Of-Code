// Check if two strings are anagrams
// Problem implementation in C

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool isAnagram(const char s1[100], const char s2[100]);
char *sortedString(const char *str);

int main()
{
    char str1[100], str2[100];

    printf("Enter a string 1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter a string 2: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (isAnagram(str1, str2))
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}

bool isAnagram(const char s1[100], const char s2[100])
{
    if (strlen(s1) != strlen(s2))
        return false;

    char *sorted1 = sortedString(s1);
    char *sorted2 = sortedString(s2);

    if (sorted1 == NULL || sorted2 == NULL)
        return false;

    bool result = (strcmp(sorted1, sorted2) == 0);

    free(sorted1);
    free(sorted2);

    return result;
}

char *sortedString(const char *str)
{
    int len = strlen(str);

    // Allocate memory for a new string (+1 for '\0')
    char *sorted = malloc((len + 1) * sizeof(char));
    if (sorted == NULL)
    {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    strcpy(sorted, str);

    // Bubble sort
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (sorted[j] > sorted[j + 1])
            {
                char temp = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = temp;
            }
        }
    }

    return sorted;
}
