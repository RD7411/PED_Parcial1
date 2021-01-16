#include <iostream>

using namespace std;

int SumaIterativa (int n)
{
	int suma=0;

	while(n>0)
	{
		suma+=(n%10);
		n/=10;
	}
	
	return (suma);
}

int main ()
{
    int Numero;

    cout << endl;
    cout << "Suma de digitos de manera iterativa" << endl << endl;
    cout << "Escriba los digitos a sumar: "<< endl << endl;
    cin >> Numero;
    cout << endl;

    cout << "La suma de los digitos es: " << (SumaIterativa (Numero)) << endl << endl;
    return 0;
}