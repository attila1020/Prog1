#include <stdio.h>

void kiir(int meret, int tomb[])
{
    for (int i = 0; i < meret; i++)
    {
        printf("%d, ", tomb[i]);
    }
}

void egyszeru_kivalasztasos_rendezes(int tomb[], int meret)
{
    int i, j, temp;

    fprintf(stderr, "# egyszeru kivalasztasos rendezes\n");

    for (i = 0; i < meret - 1; ++i)
    {
        for (j = i + 1; j < meret; ++j)
        {
            if (tomb[j] < tomb[i])
            {
                temp = tomb[i];
                tomb[i] = tomb[j];
                tomb[j] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int tomb[5] = {12, 45, 23, 36, 98};
    kiir(5, tomb);
    egyszeru_kivalasztasos_rendezes(tomb, 5);
    puts("");
    kiir(5, tomb);
    return 0;
}
