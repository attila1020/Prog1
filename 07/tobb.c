#include <stdio.h>

void stat(int tomb[], int *min, int *max)
{
    int vmin = tomb[0];
    int vmax = tomb[0];
    for (int i = 1; i < 5; i++)
    {
        if (tomb[i] > vmax)
        {
            vmax = tomb[i];
        }
        if (tomb[i] < vmin)
        {
            vmin = tomb[i];
        }
    }
    *min = vmin;
    *max = vmax;
}

int main(int argc, char const *argv[])
{
    int tomb[5] = {1, 2, 3, 4, 5};
    int max;
    int min;
    stat(tomb, &max, &min);
    printf("min: %d, max: %d", min, max);
    return 0;
}
