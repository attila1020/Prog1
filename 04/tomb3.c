#include <stdio.h>

int min(int meret, const int tomb[])
{
    int min = tomb[0];
    for (int i = 1; i < meret; i++)
    {
        if (tomb[i] < min)
        {
            min = tomb[i];
        }
    }

    return min;
}

int max(int meret, const int tomb[])
{
    int max = tomb[0];
    for (int i = 1; i < meret; i++)
    {
        if (tomb[i] > max)
        {
            max = tomb[i];
        }
    }

    return max;
}

int main(int argc, char const *argv[])
{
    int tomb[5] = {12, -4, 6, 125, -17};
    int meret = sizeof(tomb) / sizeof(tomb[0]);

    int minimum = min(meret, tomb);
    printf("Tömb legkisebb eleme: %d\n", minimum);
    printf("Tömb legnagyobb eleme: %d\n", max(meret, tomb));
    return 0;
}
