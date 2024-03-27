#include <stdio.h>

void kiir(int meret, const int tomb[])
{
    for (int i = 0; i < meret; i++)
    {
        printf("%d\n", tomb[i]);
    }
}

void feltolt(int meret, int tomb[])
{
    int szam;
    for (int i = 0; i < meret; i++)
    {
        printf("Adjon meg egy számot: ");
        scanf("%d", &szam);
        tomb[i] = szam;
    }
}

int palindrome(int meret, const int tomb[])
{
    // j = meret-1-i    0   5   4
    for (int i = 0; i < meret / 2; i++)
    {
        int j = meret - 1 - i;
        if (tomb[i] == tomb[j])
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    // int tomb[5] = {1, 2, 3, 2, 1};
    int tomb[5] = {1, 2, 3, 3, 1};
    // feltolt(5, tomb);

    kiir(5, tomb);

    if (palindrome(5, tomb) == 1)
    {
        printf("A tomb palindróm\n");
    }
    else
    {
        printf("A tomb nem palindróm\n");
    }

    return 0;
}
