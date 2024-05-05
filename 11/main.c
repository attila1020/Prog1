#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char *nev;
    int kor;
    char *varos;
    float atlag;
} Szemely;

Szemely felbont(char *sor)
{
    Szemely sz;
    char *p;
    p = strtok(sor, ";");
    sz.nev = p;
    p = strtok(NULL, ";");
    sz.kor = atoi(p);
    p = strtok(NULL, ";");
    sz.varos = p;
    p = strtok(NULL, ";");
    sz.atlag = atof(p);

    return sz;
}

int main(int argc, char const *argv[])
{
    FILE *fp = fopen("nevek.csv", "r");
    if (fp == NULL)
    {
        printf("hiba");
        exit(1242);
    }

    char sor[1024];
    while (!feof(fp))
    {
        fgets(sor, 1024, fp);
        sor[strlen(sor) - 1] = '\0';
        Szemely szemely = felbont(sor);
        printf("%s: %.1lf\n", szemely.nev, szemely.atlag);
    }

    fclose(fp);

    return 0;
}
