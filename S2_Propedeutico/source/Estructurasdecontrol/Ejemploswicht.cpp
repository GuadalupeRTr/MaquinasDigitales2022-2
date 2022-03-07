#include <iostream>
using namespace std;
int main(){
    float num1 =0, num2=0, ans=0 ;
    int opt =0;
    cout <<"Ingrese numero 1: ";
    cin >> num1;
    cout << "Ingrese numero 2: ";
    cin >> num2;
    cout << "Seleccione la opcion deseada:\n1.Sumar\t2.Restar\n3.Multiplicar\t4.Dividir\n";
    cin >> opt;
    switch (opt){
        case 1:
            ans = num1 +num2;
            break;
        case 2:
            ans = num1 -num2;
            break;
        case 3:
            ans = num1 *num2;
            break;
        case 4:
            if(num2 != 0)
            ans = num1 / num2;
            break;
        default:
            cout << "Operacion no es valida";    
            return -1;
    }
    cout <<"El resultado es: " <<ans << endl;
    return 0;
}
