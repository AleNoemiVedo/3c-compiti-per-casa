#include <iostream>


using namespace std;


int main (){


    int a; // numero che verrà inserito dall'utente e devo analizzare
    int d = 0; // la variabile che associo alle decine
    int c = 0; // la variabile che associo alle centinaia


    cout<< "_____________________________________________________________________________"<< endl;
    cout<< "Questo programma serve a farti sapere da quante decine e centinaia"<< endl;
    cout<<" e' formato il numero che inserisci."<< endl;
    cout<< "_____________________________________________________________________________"<< endl;
    cout<< endl<< "Inserisci il valore";

    cin >> a;
    if (a >= 0){
        while (a >= 100){
            a = a - 100;
            c = c + 1;
        } while (a >= 10){
            a = a - 10;
            d = d + 1;
        }


    }else
    {
        while (a <= -100)
            {
            a = a + 100;
            c = c + 1;
        } while (a <= -10){
            a = a + 10;
            d = d + 1;
        }
        a = a*(-1);
    }
    cout << endl << "Le centinaia sono: " << c << endl;
    cout << "Le decine sono: " << d << endl;
    cout << "le unita' sono: " << a;
}
