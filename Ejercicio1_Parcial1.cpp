#include <iostream>
#include <string>

using namespace std;

string cadena;
string cadenai;

int main ()
{
    cout << endl;
    cout << "Cadena de palabras invertida" << endl << endl;
    cout << "Digite la cadena a invertir: "<< endl << endl;

    getline (cin, cadena);
    for(int i = cadena.size()-1; i>=0; i--)
    {
        cadenai += cadena.at(i);
    }
    cout <<endl << "La cadena invertida es: " <<endl<< endl << cadenai <<endl << endl;
    return 0;
}