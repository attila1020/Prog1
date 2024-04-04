#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    printf("%d", rand() % (24 - 5 + 1) + 5); // [5, 24]   // [A, B] --> (B - A + 1) + A

    // rand() % 11  [0,10]  --> (10 - 0 + 1) - 0

    return 0;
}
