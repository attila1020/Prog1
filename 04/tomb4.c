#include <stdio.h>

int contains(int meret, const int tomb[], int szam)
{
    for (int i = 0; i < meret; i++)
    {
        if (tomb[i] == szam)
        {
            return 1;
        }
    }

    return 0;
}

int get_index(int meret, const int tomb[], int szam)
{
    for (int i = 0; i < meret; i++)
    {
        if (tomb[i] == szam)
        {
            return i;
        }
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    int tomb[5] = {12, -4, 6, 125, -17};
    int meret = sizeof(tomb) / sizeof(tomb[0]);

    if (contains(meret, tomb, 7))
    {
        printf("Benne van!\n");
    }
    else
    {
        printf("Nincs benne!\n");
    }
    printf("A szám indexe: %d", get_index(meret, tomb, 7));

    return 0;
}
