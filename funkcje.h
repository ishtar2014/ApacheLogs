#pragma once
#include "AllHeaders.h"

using namespace std;

///TWORZENIE LOGOW - sprawdzic i poprawic
vector<string> wczytajDane();
vector<LogRow*> daneNaWektor(vector <LogRow*> &logs);

///WYCIAGANIE LICZBY BAJTOW I PRZEGLADARKI
string znajdzBajty(string log);
int bajtNaInt(string log);
int wyciagnijBajty(string log);
string znajdzPrzegladarke(string log);


///TWORZENIE IP
vector<string> wytnijIP(string log);                        ///wycina ip ze stringa
vector<uint8_t> stworzInt(vector<string> stringip);      ///przeksztalca string ip na int
vector<uint8_t> stworzIP(string log);                      ///robi wektor

///TWORZENIE DATY
int miesiacNaLiczbe(string s);          ///zmiana slowa miesiaca na liczbe
int naStructTM(vector<string> data);    ///robi strukture tm i przeksztalca na int
vector<string> wytnijDate(string log);
int epoch(string a);
string dataDlaLudzi(string log);

///POROWNYWANIE
void bestPrzegladarka(vector <LogRow*> wekWsk);     ///Najlepsza przegladarka
int compar(const void *a, const void *b);
string podajDate();
  ///Ile roznych klientow odwiedzilo strone
                                                    ///Ile bylo odwiedzin w zadanym pkt czasu
