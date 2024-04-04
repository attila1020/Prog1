#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Pont;

int main(int argc, char const *argv[])
{
    Pont p1;
    p1.x = 5;
    p1.y = 6;
    printf("x: %d, y:%d", p1.x, p1.y);
    return 0;
}
