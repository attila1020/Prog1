#include <stdio.h>

int get_int()
{
    printf("Adjon meg egy szamot:");
    int n;
    scanf("%d", &n);

    return n;
}

int get_positive_int()
{

    // while (1)
    // {
    //     int n = get_int();
    //     if (n > 0)
    //     {
    //         return n;
    //     }
    // }

    int n;
    do
    {
        n = get_int();
    } while (n < 0);
}

void negyzet()
{
    int a = get_positive_int();
    printf("Kerulet: %d\n", 4 * a);
    printf("Terulet: %d\n", a * a);
}

int main(int argc, char const *argv[])
{
    negyzet();
    return 0;
}
