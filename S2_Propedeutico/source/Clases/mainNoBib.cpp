#include <iostream>
using namespace std;

class TarjetaBancaria{
    public:

    //Estos son los atributos (datos miembro) de la clase TarjetaBancaria
    string numTarjeta;
    string nombreTarjeta;
    string BancoEmisor;
    int mesVig;
    int anioVig;
    int nipTarjeta;

//Creamos un constructor

    TarjetaBancaria(string num_Tarjeta,string nombreTarjeta, string BancoEmisor,
                    int mesVig, int anioVig, int nipTarjeta){

//nombre de las variables que utilizaremos
        numTarjeta = num_Tarjeta;
        this -> nombreTarjeta = nombreTarjeta;
        this -> BancoEmisor = BancoEmisor;
        this -> mesVig = mesVig;
        this -> anioVig = anioVig;
        this -> nipTarjeta = nipTarjeta;



    }

    void Activartarjeta(){
        cout <<"Tarjeta de " << nombreTarjeta << " activado." << endl;        
    }

    void AnularTarjeta(){
        cout << "Tarjeta con terminación: " << numTarjeta.substr(12,4) << " anulada." << endl; 
    }
    
    void Pagar(float cantidad, int nip){
        if(nip == nipTarjeta){
            cout << "Pagado: $" << cantidad << endl;

        }else{
            cout <<"Pago rechazado. " <<endl;
        } 
    }
};

int main(){

    int aux;
    TarjetaBancaria t1("1234123412341234", "Guadalupe Trujillo", "BanCiencias", 3, 30, 1234);
    //t1.nombreTarjeta = "Guadalupe Trujillo";
    //t1.numTarjeta = "14356789345";
    
    t1.Activartarjeta();
    t1.Pagar(1000.00, 1234);
    t1.Pagar(1859.32, 1235);
    t1.AnularTarjeta();
    


    return 0;    
}