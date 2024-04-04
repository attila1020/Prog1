#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // a.out --> Hello world!
    // a.out Attila --> Hello Attila!
    // a.out Batman --> Denvérveszély!

    if(argc > 2) {
        printf("Pontosan egy argomuntumot adjon meg!");
        exit(100);
    }

    // printf("%d", strlen("Alma\n\0"));
    // s[strlen(s)-1] == '\0'; --> "Alma\0\0";

    if (argc == 1) 
    {
        printf("Hello world");
    }
    else if (strcmp(argv[1], "Batman") == 0 || strcmp(argv[1], "Robin") == 0)
    {
        printf("Denevérveszély");
    }
    else
    {
        printf("Hello %s", argv[1]);
    }
    return 0;
}
