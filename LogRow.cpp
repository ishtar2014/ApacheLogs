#include "AllHeaders.h"

using namespace std;

LogRow::LogRow()
{
 //   cout << "Konstruktor domyslny jest pusty!" << endl;
}

LogRow :: LogRow(string log)
{

    czas = DateTime(log);
    przegladarka = znajdzPrzegladarke(log);
    iloscDanych = wyciagnijBajty(log);
    vector<uint8_t> ip = stworzIP(log);
    IP.oktet[0] = ip.at(0);
    IP.oktet[1] = ip.at(1);
    IP.oktet[2] = ip.at(2);
    IP.oktet[3] = ip.at(3);

 //   cout << "log row" << endl;
}

LogRow::~LogRow()
{
    //cout << "dekonstuktor LogRow" << endl;
}

void LogRow::wyswietl()            ///Wyswietlanie calego loga w terminalu
{
    cout<< "\033[032mIP: " << (int)IP.oktet[0] << '.' << (int)IP.oktet[1] << '.' << (int)IP.oktet[2] << '.' << (int)IP.oktet[3] << "\033[0m"<< endl;
    czas.wyswietl();
    //DateTime::wyswietl() ;//<< endl;
    cout<< "Przegladarka: "<< przegladarka << endl;
    cout<< "Ilosc danych: " << iloscDanych<< endl;
}


void LogRow::maxOdwiedzin(){}           ///w jakim przedziale godzin bylo najwiecej odwiedzin
void LogRow::maxPobran(){}              ///w jakim przedziale godzin bylo najwiecej pobran
