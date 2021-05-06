#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    double x;
    double y;
    double z;
    double R;
    double Rn;
    double D;
    double Dn;
    double x1;
    double x2;
    double xi1;
    double xi2;
    double i1;
    double i2;
    double xn1;
    double xn2;
    cout <<" ingrese x, con x distinto de cero"<< endl;
    cout <<" ingrese y"<< endl;
    cout <<" ingrese z"<< endl;
    cin>> x;
    cin>> y;
    cin>> z;
    D= (y*y-4*x*z);
    //El determinante es D.
    R=sqrt (y*y-4*x*z);
    // R es la raíz cuadrada del determinante.
    if (x==0)
    {
        cout << "Error. No corresponde a una ecuacion cuadratica. x No puede ser igual a 0."<< endl;
    }
    if (D>0)
        {x1=(-1*y+R)/(2*x);
         x2=(-1*y-R)/(2*x);
         cout << "la raíz x1 es =" << x1<< endl;
         cout << "la raíz x2 es =" << x2<< endl;
        }
    if (D==0)
        {x1=(-1*y+R)/(2*x);
         x2=(-1*y-R)/(2*x);
         cout << "la raíz x1 es =" << x1<< endl;
         cout << "la raíz x2 es =" << x2<< endl;
        }
    if (D<0)
        {
        Dn = -1*(y*y-4*x*z);
    // Dn es el determinante cuando éste es negativo
        Rn= sqrt (Dn);
    // Rn es la raíz del determinante negativo.
         xn1=(-1*y)/(2*x);
          xn2=(-1*y)/(2*x);
          i1=(Rn)/(2*x);
          i2= (-1*(Rn))/(2*x);
    // Toda esta milonga es para poder expresar las raices complejas.
         cout << "la raíz x1 es =" << xn1<< "+ i*(" << i1 << ")"<< endl;
         cout << "la raíz x2 es =" << xn2<< "+ i*(" << i2 << ")"<< endl;
        }

    return 0;
}
