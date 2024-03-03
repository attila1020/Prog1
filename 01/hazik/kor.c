#include <stdio.h>
#include <math.h>

int main()
{
    double r;

    printf("Adja meg a kor sugarat: ");
    scanf("%lf", &r);

    double kerulet, terulet;

    kerulet = 2 * r * M_PI;
    terulet = r * r * M_PI;

    printf("A kor kerulete: %lf\n", kerulet);
    printf("A kor terulete: %lf\n", terulet);

    return 0;
}