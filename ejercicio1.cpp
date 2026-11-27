#include <iostream>
#include <string>

using namespace std;

class vehiculo {

    protected:
        string numeroPlaca;
        string color;
        string marca;
        double velocimetro;

    public:
        vehiculo(string placa, string col, string mar, double vel)
            : numeroPlaca(placa), color(col), marca(mar), velocimetro(vel) {

            }
        void mostrarDatos(){
            cout<<"Placa: "<<numeroPlaca<<endl;
            cout<<"Color: "<<color<<endl;
            cout<<"Marca: "<<marca<<endl;
            cout<<"Velocimetro: "<<velocimetro<<"km/h"<<endl;

        }
        void cambiarVelocidad(double nuevaVelocidad){
            if(nuevaVelocidad >= 0){
                velocimetro = nuevaVelocidad;
            }else{
                cout<<"La velocidad no puede ser negativa."<<endl;
            }
        }

};
class automovil: public vehiculo{
    private:
        int cantidadPuertas;
        int cantidadPasajeros;
    public:
        automovil(string placa, string col, string mar, double vel, int puertas, int pasajeros)
        : vehiculo(placa, col, mar, vel), cantidadPuertas(puertas), cantidadPasajeros(pasajeros){
        }
        void mostrarAutomovil(){
            cout<<"Cantidad de puertas: "<<cantidadPuertas<<endl;
            cout<<"Cantidad de pasajeros: "<<cantidadPasajeros<<endl;
            cout<<" -------------------------"<<endl;
        }

        void subirPasajeros(int cantidad){
            if(cantidad > 0){
                cantidadPasajeros += cantidad;

            }
        }
        void bajarPasajeros(int cantidad){
            if(cantidad > 0 && cantidadPasajeros >= cantidad){
                cantidadPasajeros -=cantidad;

            }else{
                cout<<"No hay suficientes pasajeros para bajar "<<endl;

            }
        }
};

class Camion : public vehiculo{
    private:
        double carga;
    public:
        Camion(string placa, string col, string mar, double vel, double cargaInicial)
        : vehiculo(placa, col, mar, vel), carga(cargaInicial){

        }

        void mostrarCamion(){
            cout<<"---DATOS DEL CAMION---"<<endl;
            mostrarDatos();
            cout<<"Carga actual: "<<carga<<" kg"<<endl;
            cout<<"--------------------------"<<endl;
        }
        void cambiarCarga(double nuevaCarga){
            if(nuevaCarga >=0){
                carga = nuevaCarga;           
             }else{
                cout<<"La carga no puede ser negativa "<<endl;

             }

        }

};