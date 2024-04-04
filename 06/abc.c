#include <stdio.h>

int main(int argc, char const *argv[])
{
    char abc[26];
    // for (int i = 0; i < 26; i++)
    // {
    //     abc[i] = 97 + i; 
    // }
    int index = 0;
    for (char c = 'a'; c <= 'z'; c++)
    {
        abc[index] = c;
        index++;
    }
    

    for (int i = 0; i < 26; i++)
    {
        printf("%c ", abc[i]);
    }
    
    
    return 0;
}
