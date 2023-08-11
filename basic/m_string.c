#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE_MAX 100

int main()
{
    char *name = (char *)malloc(sizeof(char) * SIZE_MAX);
    fgets(name, SIZE_MAX, stdin);
    char *p = name;
    if (p)
    {
        while (*p != '\n')
        {
            p = (p + 1);
        }
        *p = '\0';
    }
    printf("%s\n", name);
    free(name);
    return 0;
}