#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <vector>

#include "Adresat.h"
#include "UzytkownikMenedzer.h"
#include "PlikZAdresatami.h"

#include <iostream>

using namespace std;

class AdresatMenedzer
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;

    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    int pobierzIdNowegoAdresata();


public:

    AdresatMenedzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
        : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);

    };

    void dodajAdresata();
    void wypiszWszystkichAdresatow();
    int podajIdWybranegoAdresata();
    char wybierzOpcjeZMenuEdycja();
    void edytujAdresata();
    void usunAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);




};

#endif
