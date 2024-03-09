#include <stdio.h>

int duplaz(int x)
{
    return 2 * x;
}

void kiir(int n)
{
    printf("%d", n);
}

int main(int argc, char const *argv[])
{
    int n = 15;

    int r = duplaz(n);

    kiir(r);
    return 0;
}
