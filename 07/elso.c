#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void feltolt(int meret, int tomb[])
{
    for (int i = 0; i < meret; i++)
    {
        tomb[i] = rand() % (36 - 12 + 1) + 12;
    }
}

void kiir(int meret, int tomb[])
{
    for (int i = 0; i < meret; i++)
    {
        printf("%d,", tomb[i]);
    }
}

int main(int argc, char const *argv[])
{
    // 10 elemű tömb random számokkal [12, 36] intervallumban
    int tomb[10];
    srand(2024);
    feltolt(10, tomb);
    kiir(10, tomb);
    return 0;
}
