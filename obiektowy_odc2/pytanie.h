#include <iostream>

using namespace std;

class Pytanie

{
    public:

    int nr_pytania;
    string tresc;
    string a,b,c,d;
    string poprawna;
    string odpowiedz;
    int punkt; // 1 lub 0

    void wczytaj(); // wczytuje pytania z pliku
    void zadaj(); //pokazuje pytanie i czyta odpowiedz
    void sprawdz(); // sprawdza poprawna odowiedz

};
