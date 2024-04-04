#include <stdio.h>
#include <string.h>

typedef char *string;

int palindrom(string s)
{
    int meret = strlen(s);
    for (int i = 0; i < meret / 2; i++)
    {
        int j = meret - i - 1;
        if (s[i] == s[j])
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int find_char(string s, char c)
{
    int meret = strlen(s);
    for (int i = 0; i < meret; i++)
    {
        if (s[i] == c)
        {
            return i;
        }
    }
    return -1;
}

int contains_char(string s, char c)
{
    // 1 ha benne van, 0 ha nem
    // Egyik megoldás
    if (find_char(s, c) == -1)
    {
        return 0;
    }
    return 1;

    // Másik megoldás
    //     int meret = strlen(s);
    //     for (int i = 0; i < meret; i++)
    //     {
    //         if (s[i] == c)
    //         {
    //             return 1;
    //         }
    //     }
    //     return 0;
    // }
}
int main(int argc, char const *argv[])
{
    // string s = "hello";
    // Sztring beolvasása
    printf("Adja meg a sztringet: ");
    char s[10];
    fgets(s, sizeof(s), stdin);
    s[sizeof(s) - 1] = '\0';
    printf("Adja meg a karaktert: ");
    char c;
    scanf("%c", &c);
    if (contains_char(s, c))
    {
        printf("Benne van\n");
    }
    else
    {
        printf("Nincs benne\n");
    }

    return 0;
}
