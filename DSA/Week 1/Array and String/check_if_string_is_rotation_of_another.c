// Check if string is rotation of another
// Problem implementation in C

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isRotation(char str[], char substr[])
{
    int n = strlen(str);
    int m = strlen(substr);

    if (m > n)
        return false;

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
    char temp[100];
    strcpy(temp,str);
    strcat(temp,str);
    if (isRotation(temp, substr))
        printf("\"%s\" is a rotation of \"%s\".\n", substr, str);
    else
        printf("\"%s\" is not a rotation of \"%s\".\n", substr, str);

    return 0;
}
