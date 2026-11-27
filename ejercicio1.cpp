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