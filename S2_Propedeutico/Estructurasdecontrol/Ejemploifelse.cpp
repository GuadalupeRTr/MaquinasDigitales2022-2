#include <iostream>
using namespace std;

int main(){
    float dato;
    cout << "Ingrese un numero: ";
    cin >> dato;

    if(dato > 0){
        cout << "Este numero es mayor que cero" << endl;
    }
    else{
        dato = dato +10;
        cout << "El nuevo numero es: " << dato << endl;
    }
return 0;
}    