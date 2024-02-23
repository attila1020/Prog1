#include <stdio.h>

int main()
{

    // Printf alapvető használata, amikor csak simán egy formázatlan szöveget írunk
    // ki a képernyőre.
    printf("Ez egy formázatlan szöveg\n");

    // Az esetek túlnyomó részében sajnos nem lesz ennyire egyszerű dolgunk ugyanis
    // van, hogy formázni szeretnénk egy szöveget, számokat beleírni amiknek az
    // értékét akkor mág lehet nem tudjuk. Erre használjuk a placeholdereket

    // Integer
    int result = 100;
    printf("Az eredmeny: %d\n", result);

    // Character
    char c = 'A';
    printf("Az ABC elso betuje: %c\n", c);

    // Float
    float f = 1.0f;
    printf("Ez egy lebegopontos szam: %f\n", f);

    // Double
    double d = 1.123;
    printf("Ez szinten egy lebegopontos szam: %lf\n", d);

    // Sztring
    // Ettől ne ijedjünk meg később lesz róla szó, hogy miért így kell deklaráni, egyelőre csak bemutatás
    // kedvéért írom bele
    char *szoveg = "Ez egy szoveg";
    printf("Saját szovegem: %s", szoveg);

    return 0;
}