#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba, strzal, ile_prob=0;

int main()
{
    cout << "Pomyslalem sobie liczbe z zakresu 1-100" << endl;
    srand(time(NULL));
    liczba=rand()%100+1;


    while(strzal!=liczba)
    {
        ile_prob++;
        cout<<"zgadnij jaka: (to twoja "<<ile_prob<<" proba):";
        cin>>strzal;

        if(strzal==liczba)
            cout<<"udalo sie mordo w "<<ile_prob<<" probie"<<endl;
        if(strzal<liczba)
            cout<<"za malo"<<endl;
        if(strzal>liczba)
            cout<<"za duzo"<<endl;

    }
    system("pause");
    return 0;
}
