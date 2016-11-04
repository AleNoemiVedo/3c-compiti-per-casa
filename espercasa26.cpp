#include <iostream>
using namespace std;


int main()
{
    int div=2;
    int n;
    int x;


    cout<<"Quale numero devo controllare?"<<endl;
    cin>>n;

    x=n%div;

    while (n>div)
    {
        if (x==0)
        {
            cout<<"Il numero inserito non e' primo!"<<endl;
            div=n+10;
        }
        if(x==1)
        {
            div=div++;
        }
    }
if (n<div)
{
    cout<<"Fine!"<<endl;
}
else
{
    cout<<"Il numero e' Primo!"<<endl;
}
}
