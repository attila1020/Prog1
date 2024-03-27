#include <stdio.h>

void kiir(int meret, const int tomb[])
{
    for (int i = 0; i < meret; i++)
    {
        printf("%d\n", tomb[i]);
    }
}

int sum(int meret, const int tomb[])
{
    int osszeg = 0;
    for (int i = 0; i < meret; i++)
    {
        osszeg += tomb[i];
    }

    return osszeg;
}

int product(int meret, const int tomb[])
{
    int osszeg = 1;
    for (int i = 0; i < meret; i++)
    {
        osszeg *= tomb[i];
    }

    return osszeg;
}

double atlag(int meret, const int tomb[])
{
    // double atlag;
    // atlag = sum(meret, tomb) / meret;

    // return atlag;

    return (double)sum(meret, tomb) / (double)meret;
}

int main(int argc, char const *argv[])
{
    int tomb[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int meret = sizeof(tomb) / sizeof(tomb[0]);

    kiir(meret, tomb);
    int osszeg = sum(meret, tomb);

    printf("A tömbelemek összege: %d\n", osszeg);
    printf("A tömbelemek szorzata: %d\n", product(meret, tomb));

    printf("A tömbelemek atlaga: %lf", atlag(meret, tomb));

    return 0;
}
