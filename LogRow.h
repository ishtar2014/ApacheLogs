#pragma once
#include "AllHeaders.h"

using namespace std;

//enum browser {None, Mozilla, Chrome, Opera, InternetExplorer, Other};

union AdresIP
{
    uint8_t oktet[4];
    uint32_t ip;
};

class LogRow
{
protected:
    AdresIP IP;
    DateTime czas;
    //string przegladarka;
    int32_t iloscDanych;

public:
    string przegladarka;
    ///KONSTRUKCJA/DEKONSTRUKCJA
    LogRow();
    //LogRow(string log);
    LogRow(string log);
    ~LogRow();

    ///METODY
    void wyswietl();            ///Wyswietlanie calego loga w terminalu
    void ileKlientow();         ///Ile roznych klientow odwiedzilo strone
    void ileOdwiedzin();        ///Ile bylo odwiedzin w zadanym pkt czasu
    void maxOdwiedzin();        ///w jakim przedziale godzin bylo najwiecej odwiedzin
    void maxPobran();           ///w jakim przedziale godzin bylo najwiecej pobran
    void bestPrzegladarka();    ///najpopularniejsza przegladarka

    ///PRZYJACIELE
    friend void ileKlientow(vector <LogRow*> wek);
    friend int ileOdwiedzin(vector<LogRow*> logs);
    friend void kiedyNajwiecejOdwiedzin(vector<LogRow*> logs);
    friend void kiedyNajwiecejPobran(vector<LogRow*> logs);
};



