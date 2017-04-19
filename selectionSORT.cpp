
#include <iostream>
#define N 100


using namespace std;

//dichiarazione funzioni
void selection_sort(int v[], int dim);

//inizio algoritrmo

int main()
{

//Dichiarazionr variabili
  int a[n] = {-1,0,5,7,2,4,5,3,-2,1,0};
  int dim = 11;

   selection_sort(a, dim);

  return 0;
}

//funzione selction sort
//INZIO selection sort
void selection_sort(int v[], int dim)
{

//Dichiarazione variabili
   int comodo;
   int i_min;

   for(int i = 0; i < dim-1; i++) //inizio ciclo for
    {

      i_min=i;

      for (int l = i+1; l < dim; l++) //inizio ciclo for
      {
          if (v[i_min] > v[l])
      {
          i_min=l;
      }

      v[i]=comodo;

      v[i]=v[i_min];

      v[i_min]=comodo;

      }
      //fine ciclo for

    }
    //fine ciclo for
}

//FINE selection sort
