#include <stdio.h>
#include <stdlib.h>

int my_abs(int x)
{
    return (x < 0) ? x * -1 : x;
}

int main(int argc, char const *argv[])
{
    printf("%d\n", my_abs(-7));

    printf("%d\n", my_abs(3));
    printf("%d\n", my_abs(1247698));
    printf("%d\n", my_abs(0));
    return 0;
}
