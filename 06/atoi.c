#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        printf("Hiba! 2 argumentumot adjon meg!");
        exit(1);
    }

    float a = atof(argv[1]);
    float b = atof(argv[2]);

    printf("Összeg: %.2f\n", a + b);
    printf("Különbség: %.2f\n", a - b);
    printf("Szorzat: %.2f\n", a * b);

    return 0;
}
