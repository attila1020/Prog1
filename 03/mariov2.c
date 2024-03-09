#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Adjon meg egy szamot: ");
    int n;
    scanf("%d", &n);

    for (int i = 1; i < n + 1; i++)
    {
        int spaces = n - i;
        int hash = i;

        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < hash; k++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
/*
-
-
-
-
*/