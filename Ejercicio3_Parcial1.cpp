#include <iostream>

using namespace std;

int SumaRecursiva (int n)

{
	if (n==0)
		return(0);
	else
		return ((n%10) + SumaRecursiva(n/10));
}

int main ()
{
    int Numero;

    cout << endl;
    cout << "Suma de digitos de manera recursiva" << endl << endl;
    cout << "Escriba los digitos a sumar: "<< endl << endl;
    cin >> Numero;
    cout << endl;

    cout << "La suma de los digitos es: " << (SumaRecursiva (Numero)) << endl << endl;
    return 0;
}