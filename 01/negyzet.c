#include <stdio.h>

int main()
{
    int a;

    printf("Kerem adja meg a negyzet oldalat: ");
    scanf("%d", &a);

    int kerulet = 4 * a;
    int terulet = a * a;

    printf("A negyzet kerulete: %d\n", kerulet);
    printf("A negyzet terulete: %d\n", terulet);

    return 0;
}
