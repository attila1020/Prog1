#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int rfind_char(char *s, char c)
{
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        if (s[i] == c)
        {
            return i;
        }
    }

    return -1;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("HIBA!");
        exit(2);
    }
    char *betu = argv[2];
    char c = betu[0];

    printf("String: %s, char: %c    \n Index: %d", argv[1], c, rfind_char(argv[1], c));
    return 0;
}
