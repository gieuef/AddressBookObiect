#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>

using namespace std;

class MetodyPomocnicze
{
public:
   static string konwerjsaIntNaString(int liczba);
   static string wczytajLinie();
   static int konwersjaStringNaInt(string liczba);
   static int wczytajLiczbeCalkowita();
   static char wczytajZnak();
   static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);

};



#endif
