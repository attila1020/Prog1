#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 2;
    int b = 3;
    int tmp;

    printf("a=%d, b=%d\n",a,b);
    tmp = a; // tmp = 2
    a = b; // a = 3;
    b = tmp; // b = 2;
    printf("a=%d, b=%d\n",a,b);

    return 0;
}