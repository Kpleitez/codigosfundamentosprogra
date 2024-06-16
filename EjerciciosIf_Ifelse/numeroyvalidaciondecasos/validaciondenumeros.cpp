#include <iostream>
using namespace std;

int main (){

int n1, n2, n3;

cout << "VALIDACION DE CASOS DE NUMEROS ENTEROS"<<endl;
cout << "Ingrese un numero entero"<< endl;
cin >> n1;
cout << "Ingrese un segundo numero entero"<< endl;
cin >> n2;
cout << "Ingrese un tercer numero entero"<< endl;
cin >> n3;

if (n1 == n2 * n3)
{cout << "Se cumple el primer caso de que el primer numero digitado ("<< n1 << ") es igual a la multiplicacion del segundo ---> "<< n2 << " por el tercero ---> "<< n3 << endl;}
else if (n2 == n1 * n3)
{cout << "Se cumple el segundo caso de que el segundo numero digitado ("<< n2 << ") es igual a la multiplicacion del primero ---> "<< n1 << " por el segundo ---> "<< n3 << endl;}
else if (n3 == n1 * n2)
{cout << "Se cumple el tercer caso de que el ultimo numero digitado ("<< n3 << ") es igual a la multiplicacion del primero ---> "<< n1 << " por el segundo ---> "<< n2 << endl;}
else 
cout << "Ninguno de los 3 casos anteriores se cumple "<<endl;  


    return 0;
}