#include <iostream>
using namespace std; 

int main (){

char letra;

cout << endl << "DETERMINACION DE VOCAL O CONSONANTE" << endl;
cout << "Digite una letra" << endl;
cin >> letra;

if (letra == 'a' || letra == 'A'){
    cout << "la letra (" << letra << ") es una vocal" << endl; 
} else if (letra == 'e' || letra == 'E'){
    cout << "la letra (" << letra << ") es una vocal" << endl; 
}else if (letra == 'i' || letra == 'I'){
    cout << "la letra (" << letra << ") es una vocal" << endl; 
}else if (letra == 'o' || letra == 'O'){
    cout << "la letra (" << letra << ") es una vocal" << endl; 
}else if (letra == 'u' || letra == 'U'){
    cout << "la letra (" << letra << ") es una vocal" << endl; 
}
else 
cout << "la letra (" << letra << ") es una consonante" << endl;

    return 0;
}