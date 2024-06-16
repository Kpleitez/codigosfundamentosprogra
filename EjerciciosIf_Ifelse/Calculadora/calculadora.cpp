#include <iostream>
using namespace std;

int main (){

char seleccion;
float n1,n2,resultado;

cout << "CALCULADORA"<<endl;
cout << "Si desea realizar una suma ingrese el operador (+)"<< endl;
cout << "Si desea realizar una suma ingrese el operador (-)"<< endl;
cout << "Si desea realizar una suma ingrese el operador (*)"<< endl;
cout << "Si desea realizar una suma ingrese el operador (/)"<< endl;
cin >> seleccion;
if (seleccion == '+')
{cout << "Usted ha seleccionado realizar una suma"<< endl <<"Ingrese solo numeros positivos"<< endl;
          cout << "Ingrese un numero"<< endl;
          cin >> n1;
          if (n1 >0){
          cout << "Ingrese un segundo numero"<< endl;
          cin >> n2;
          if (n2 >0){
            resultado = n1 +n2;
          cout << "El resultado es de: "<< resultado << endl;  
          }
          else cout << "El segundo numero debe ser positivo";
          }
          else 
          cout << "El primer numero debe ser positivo"<< endl;
}
else if (seleccion == '-')
{cout << "Usted ha seleccionado realizar una resta"<< endl <<"Ingrese solo numeros positivos"<< endl;
 cout << "Ingrese un numero"<< endl;
          cin >> n1;
          if (n1 >0){
          cout << "Ingrese un segundo numero"<< endl;
          cin >> n2;
          if (n2 >0){
            resultado = n1 - n2;
          cout << "El resultado es de: "<< resultado << endl;  
          }
          else cout << "El segundo numero debe ser positivo";
          }
          else 
          cout << "El primer numero debe ser positivo"<< endl;


}
else if (seleccion == '*')
{cout << "Usted ha seleccionado realizar una multiplicacion"<< endl <<"Ingrese solo numeros positivos"<< endl;
 cout << "Ingrese un numero"<< endl;
          cin >> n1;
          if (n1 >0){
          cout << "Ingrese un segundo numero"<< endl;
          cin >> n2;
          if (n2 >0){
            resultado = n1 * n2;
          cout << "El resultado es de: "<< resultado << endl;  
          }
          else cout << "El segundo numero debe ser positivo";
          }
          else 
          cout << "El primer numero debe ser positivo"<< endl;
}
else if (seleccion == '/')
{cout << "Usted ha seleccionado realizar una division"<< endl <<"Ingrese solo numeros positivos"<< endl;
 cout << "Ingrese un numero"<< endl;
          cin >> n1;
          if (n1 >=0){
          cout << "Ingrese un segundo numero"<< endl;
          cin >> n2;
          if (n2 >-1){
            if (n2 != 0){
            resultado = n1 / n2;          
           cout << "El resultado es de: "<< resultado << endl;}
           else 
           cout << "La division entre cero no es posible" << endl;
          }
          else cout << "El segundo numero debe ser positivo";
          }
          else 
          cout << "El primer numero debe ser positivo"<< endl;
}
else 
cout << "Digite un operador para realizar alguna operacion"<<endl;  


    return 0;
}