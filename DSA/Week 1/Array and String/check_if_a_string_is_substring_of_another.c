// Check if a string is substring of another
// Problem implementation in C

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if substr is a substring of str
bool isSub(char str[], char substr[]) {
    int n = strlen(str);
    int m = strlen(substr);

    if (m > n) return false;

    for (int i = 0; i <= n - m; i++) 
    {
        int j = 0;
        while (j < m && str[i + j] == substr[j])
            j++;

        if (j == m) 
            return j;
    }

    return -1;
}

int main() 
{
    char str[100], substr[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  

    printf("Enter substring: ");
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = '\0';  

    if (isSub(str, substr))
        printf("\"%s\" is a substring of \"%s\".\n", substr, str);
    else
        printf("\"%s\" is not a substring of \"%s\".\n", substr, str);

    return 0;
}
