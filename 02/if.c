#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Adjon meg egy egész számot: ");
    int szam;
    scanf("%d", &szam);

    if ((szam % 3 == 0) && (szam % 5 == 0))
    {
        printf("paros");
    }
    else
    {
        printf("paratlan");
    }

    return 0;
}
