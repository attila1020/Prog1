#include <stdio.h>

int main(int argc, char const *argv[])
{
    // breakre példa
    while (1)
    {
        int n;
        printf("Adjon meg egy pozitív számot: ");
        scanf("%d", &n);
        if (n > 0)
        {
            break;
        }
    }

    // continue-ra példa
    for (int i = 0; i < 10; i++)
    {
        if (i == 6)
        {
            continue;
        }
        printf("%d", i);
    }

    return 0;
}
