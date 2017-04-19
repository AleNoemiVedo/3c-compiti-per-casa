
#include <iostream>
#define N 100


using namespace std;

//dichiarazioni funzioni

void selection_sort(int v[], int dim);
void bubble_sort(int v[], int dim);
void stampa(int v[], int dim);
void scambio(int v[], int dim, int p1, int p2);

int main()
{
    int a[] = {-3,-1,0,7,4,5,7,8,10,1,9};
    int dim = 11;


    selection_sort(a, dim);
    stampa(a, dim);

    cout << endl;

    int b[] = {-3,-1,0,7,4,5,7,8,10,1,9};

    bubble_sort(b, dim);
    stampa(b, dim);

    cout << endl;

    return 0;
}

void bubble_sort(int v[], int dim){

    int i;
    int h;
    int sp;
    int comodo;
    bool continua = true;
    h = dim;

    while(continua)
    {

        sp = h;
        continua = false;

        for(i = 0; i < sp-1; i++)
        {

            if (v[i]>v[i+1])
            {

                scambio(v, dim, i, i+1);
                continua = true;
               h=i;

            }


        for (int i=0; i<dim; i++)
            {

              cout << v[i]<< " ";

            }

        cout << endl;


        }

    }

}
//FINE ciclo for, ciclo while e funzione


void selection_sort(int v[], int dim)

{

    int comodo;

    for (int i = 0; i < dim-1; i++)

    {

        for (int l = i+1; l < dim; l++)

      {

            if (v[i] > v[l]){

                scambio(v, dim, i, l);
            }

        }

    }

}
//FINE ciclo for e funzione


void stampa(int v[], int dim){
    for(int i = 0; i < dim; i++){
        cout << v[i] << " ";
    }
}

void scambio(int v[], int dim, int p1, int p2){
    int comodo;
    if (pos1 < dim && p2 < dim ){
        comodo = v[p1];
        v[p1] = v[p2];
        v[p2] = comodo;
    }
}
