/*
Explored new function strtok()
The strtok() function in C is used to split a string into tokens based on a specified delimiter (like space ' ', comma ',', etc.).

Syntax:
char *strtok(char *str, const char *delim);

*/

// Using strtok()
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));

    scanf("%[^\n]", s);

    s = realloc(s, strlen(s) + 1);

    char *token = strtok(s, " ");
    while (token != NULL) 
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    free(s);
    return 0;
}

/*

// Using Logic
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf(" %[^\n]", s);

    int i = 0;
    while (s[i] != '\0') 
    {
        while (s[i] == ' ') 
        {
            i++;
        }

        while (s[i] != ' ' && s[i] != '\0') 
        {
            printf("%c", s[i]);
            i++;
        }

        if (s[i] == ' ' || s[i] == '\0') 
        {
            printf("\n");
        }
    }

    free(s);
    return 0;
}

*/