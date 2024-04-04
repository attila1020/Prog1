// * végjelig olvassuk a sztringeket és a végén visszakapjuk a számok darabszámát
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int osszeg = 0;
    char szoveg[1024];
    while (1)
    {
        printf("szoveg: ");
        scanf("%s", &szoveg);
        szoveg[strlen(szoveg) - 1] = '\0';

        if (strcmp(szoveg, "*") == 0)
        {
            break;
        }

        if (isalnum(szoveg))
        {
            osszeg += atoi(szoveg);
        }
    }
    return 0;
}