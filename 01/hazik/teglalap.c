#include <stdio.h>

int main()
{
    int a, b;

    printf("Adja meg a teglalap egyik oldalat: ");
    scanf("%d", &a);
    printf("Adja meg a teglalap masik oldalat: ");
    scanf("%d", &b);

    int kerulet = 2 * a + 2 * b;
    int terulet = a * b;

    printf("A teglalap kerulete: %d\n", kerulet);
    printf("A teglalap terulete: %d\n", terulet);

    return 0;
}