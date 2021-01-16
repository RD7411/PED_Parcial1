#include <iostream>

using namespace std;

main ()
{
 int CantNum;
 float a;
 float c=0;
 float Prom;

 cout << endl;
 cout << "Suma y promedio de N numeros" << endl << endl;
 cout <<"ingrese la cantidad de numeros que desea sumar y obtener su promedio: " << endl;
 cin >> CantNum;

 for(int i = 0; i<CantNum; i++){
 cout <<"ingrese el numero: "<<i+1<<": ";
 cin>>a;
 c=c+a;
 }
 Prom=c/CantNum;

 cout << "La suma es: " << c;
 cout << endl;
 cout << "El promedio es: " << Prom;
}