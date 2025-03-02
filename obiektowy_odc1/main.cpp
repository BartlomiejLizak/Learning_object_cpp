#include <iostream>

using namespace std;


class samochod
{
public:
    //atrybuty
    string marka;
    string model;
    int rocznik;
    int przebieg;

    void wczytaj()
    {
        cout << endl << "DODAWANIE NOWEGO POJAZDU DO BAZY: " << endl;
        cout <<"Podaj marke: ";
        cin >> marka;
        cout <<"Podaj model: ";
        cin >> model;
        cout <<"Podaj rocznik: ";
        cin >> rocznik;
        cout <<"Podaj przebieg: ";
        cin >> przebieg;
    }

    void wypisz()
    {
        cout << "marka samochodu to: " << marka << " model tego samochodu to: " << model << " rocznik: " << rocznik <<" i przebieg: " << przebieg << endl;
    }

};


class Zwierze
{
public:

    // atrybuty
    string gatunek;
    string imie;
    int wiek;

    // metody
    void dodaj_zwierze()
    {
        cout << endl << "DODAWANIE NOWEGO ZWIERZECIA DO BAZY: " << endl;
        cout <<"Podaj gatunek: ";
        cin >> gatunek;
        cout <<"Podaj imie: ";
        cin >> imie;
        cout <<"Podaj wiek: ";
        cin >> wiek;

    }

    void daj_glos()
    {
        if(gatunek == "kot") cout << imie << " lat " << wiek << ": Miau!";
        else if(gatunek == "koza") cout << imie << " lat " << wiek << ": Beee!";
        else if(gatunek == "krowa") cout << imie << " lat " << wiek << ": Muuu!";
        else cout << "Nieznany gatunek!";
    }
};


int main()
{
/*
Zwierze z1;
z1.dodaj_zwierze();
z1.daj_glos();
Zwierze z2;
z2.dodaj_zwierze();
z2.daj_glos();
Zwierze z3;
z3.dodaj_zwierze();
z3.daj_glos();
*/
samochod s1;
s1.wczytaj();
s1.wypisz();
samochod s2;
s2.wczytaj();
s2.wypisz();

}

