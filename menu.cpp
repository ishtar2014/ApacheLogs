#include "AllHeaders.h"

using namespace std;

void eatline()
{
    cin.ignore(INT_MAX, '\n');
}

void basicmenu()
{
    cout<<"Program ApacheLog" << endl;
    cout<<"\t1. Wyswietl logi" << endl;
    cout<<"\t2. Ilosc roznych klientow odwiedzajacych serwer"<< endl;
    cout<<"\t3. Unikatowe odwiedziny w zadanym punkcie czasu" << endl;
    cout<<"\t4. Godzinny przedzial czasu, w ktorym najwiecej osob odwiedzilo strone" << endl;
    cout<<"\t5. Godzinny przedzial czasu, w ktorym najwiecej danych przeslano" << endl;
}

void case1(vector<LogRow*> logs)
{
    for(int i=0; i<ileLogow;i++)
    {
        logs.at(i)->wyswietl();
    }
    cout << "Wyswietlono " << ileLogow << " logow" << endl;
}

void apachelog()
{
    bool menuOn;
    char menu;
    vector<LogRow*>logs;
    daneNaWektor(logs);
    do
    {
        basicmenu();
        char menu;
        cin>>menu;
    switch(menu)
    {
        case'1':
        {
            eatline();
            case1(logs);
            break;
        }
        case'2':
        {
            eatline();
            ileKlientow(logs);
            break;
        }
        case'3':
        {
            eatline();
            cout << "W zadanym okresie czasu odwiedzono serwer " << ileOdwiedzin(logs) << " razy"<< endl;
            break;
        }
        case'4':
        {
            eatline();
            kiedyNajwiecejOdwiedzin(logs);
            break;
        }
        case'5':
        {
            eatline();
            kiedyNajwiecejPobran(logs);
            break;
        }
    }

        cout<<"Czy kontynuowac? (y/n)" << endl;
        cin>>menu;
        if(menu=='y' || menu == 'Y') menuOn=true;
        else if(menu=='n' || menu == 'N') menuOn=false;
    }while(menuOn==true);

    for(int i=0; i<logs.size(); i++)
    {
        delete logs.at(i);
    }
}
