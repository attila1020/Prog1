#include <stdio.h>

int main()
{
    // Nagyon fontos az interaktív kérés, vegyük észre itt nem használtam
    // \n-t mivel itt nem szükséges hogy új sorba vigye a kurzort, majd
    // miután beolvasta úgyis új sorba fogja vinni
    printf("Kérem adjon meg egy számot: ");

    // Változó deklarálása, amiben majd eltároljuk az értéket
    int szam;
    // Érték beolvasása és elmentése a szam változóba
    scanf("%d", &szam);

    // Beolvasott szám kiíratása
    printf("Az Ön által megadott szám: %d\n", szam);

    return 0;
}
