#include <iostream>
using namespace std;

int main(){

    int data;

    do{
        cout << "Ingrese un numero entre el rango de 0 y 10: ";
        cin >> data;
    }while (data>=0 && data<= 10);

    cout << "El numero " << data << "no esta dentro del rango" << endl;

    return 0;
}