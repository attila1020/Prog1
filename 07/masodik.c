// * végjelig olvassuk a sztringeket és a végén visszakapjuk a számok darabszámát
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int osszeg = 0;
    char szoveg[1024];
    while (1)
    {
        printf("szoveg: ");
        // fgets(szoveg, 1024, stdin);
        scanf("%s", &szoveg);
        // szoveg[strlen(szoveg) - 1] = '\0';

        if (strlen(szoveg) == 1 && szoveg[0] == '*')
        {
            break;
        }

        osszeg += atoi(szoveg);
    }
    printf("%d", osszeg);
    return 0;
}