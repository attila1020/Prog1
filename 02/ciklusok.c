#include <stdio.h>
#include <math.h>

int main()
{
    // Szöveg kiíratása 5x for ciklussal, while ciklussal és do-while ciklussal
    for (int i = 1; i <= 5; i++)
    {
        printf("%d) For ciklus\n", i);
    }

    int j = 0;
    while (j < 5)
    {
        printf("%d) While ciklus\n", j);
        j++;
    }
    int k = 0;
    do
    {
        printf("%d) Do-While ciklus\n", k);
        k++;
    } while (k < 5);

    return 0;
}