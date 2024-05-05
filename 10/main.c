#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    const char *filename = "teszt.txt";
    // "r", "w", "a"
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        fprintf(stderr, "Hiba a %s fájl megnyitásakor!", filename);
        exit(1);
    }

    char szam[1024];
    while (!feof(fp))
    {
        fgets(szam, sizeof(szam), fp);
        printf("%d ", atoi(szam));
    }

    fclose(fp);

    return 0;
}
