// Check if string is a palindrome
// Problem implementation in C

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char str[100])
{
    int len = strlen(str);
    char rev[100];

    for (int i = len - 1, j = 0; i >= 0; i--, j++)
    {
        rev[j] = str[i];
    }
    rev[len] = '\0'; 

    return strcmp(str, rev) == 0;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str))
        printf("\"%s\" is a Palindrome String.\n", str);
    else
        printf("\"%s\" is not a Palindrome String.\n", str);

    return 0;
}
