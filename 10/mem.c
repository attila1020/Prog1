#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *array = malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("%d -> %d\n", i, array[i]);
    }

    free(array);
    return 0;
}
