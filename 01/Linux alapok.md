 ## Navigáció
 Directorykban lépkedni a `cd` paranccsal tudunk. A parancs után megadhatjuk a directory nevét vagy akár hosszabban az egész elérési utat is. **Használat:**
 ```bash
 cd directory
```
```bash
cd /path/to/the/directory
```
 Visszafele lépkedni ugyanezzel a paranccsal tudunk csak a directory neve helyet a `..`-ot használjuk. Ezt az elérési úthoz hasonlóan lehet növelni, így többet is vissza tudunk lépni pl.: `../../..` (Ezzel például 3-at léphetünk felfele) **Használat:**
 ```bash
 cd ..
```
```bash
cd ../../..
```
## Listázás
Az aktuális directoryban lévő subdirectorykat és fájlokat az `ls` paranccsal tudjuk kilistázni. A `-a` kapcsolóval láthatóak lesznek a rejtett fájlok is és a `-l` kapcsolóval pedig részletesebb, olvashatóbb formában tudjuk kilistázni a dolgokat. **Használat:**
```bash
ls -al
```

## Fájlkezelés

### Létrehozás
Fájlokat a `touch`-al hozunk létre. A parancs után a fájl nevét kell megadni kiterjesztéssel együtt. ***Használat:***
```bash
touch example.c
```
<div style="page-break-before:always">&nbsp;</div>
<br style="page-break-before: always;">

Directorykat a `mkdir`-el tudunk létrehozni. A `touch`-hoz hasonlóan itt is a directory nevét kell megadni. ***Használat:***
```bash
mkdir directory
```
> *Tip:* Fájl létrehozhatunk az alábbi paranccsal is. Ezzel akár írhatunk is a fájlba, ha az `echo` után megadjuk a fájlba írandó szöveget
> ``` bash
> echo "szöveg" >> text.txt
> ```

### Törlés
Fájlokat/directorykat az `rm`-el tudunk törölni, a parancs után a fájl/directory nevét kell megadni. Directoryk törléséhez szükséges a `-r` kapcsoló használata is. Érdemes a `-f` kapcsolót is használni, hogy a törlést ne akadályozza meg semmi.  
>*Fontos:* A `-f`   kapcsolót csak fokozott óvatosággal használjuk!

***Használat:***
```bash
rm -rf filename
```

### Mozgatás és átnevezés

Fájlokat és directroykat mozgatni és átnevezni a `mv` paranccsal lehet. Mozgatásnál előbb meg kell adni a fájl nevét/elérési útját majd azt a pathet ahova mozgatni szeretnénk. Ha nem pathet adunk meg hanem egy másik fájlnevet akkor a fájlt átnevezzük. **Használat:**
```shell
mv path/to/file new/path
```
```shell
mv example.txt text.txt
```

### Másolás
Fájlokat/directorykat másolni a `cp`-vel lehet. Itt a mozgatáshoz hasonlóan meg kell adni a fájl nevét vagy elérési útját majd azt a pathet ahova másolni szeretnénk. **Használat:**
```shell
cp path/to/file new/path
```

<br style="page-break-before: always;">

## Megjelenítés

Fájlokat a `cat`-el tudunk megjeleníteni a terminálban. A parancsnak csak a fájl nevét/elérési útját kell megadnunk. **Használat:**
```shell
cat text.txt
```
