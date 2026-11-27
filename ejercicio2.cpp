#include <iostream>
#include <string>
using namespace std;

class Figura {
    protected:
        string color;
    public:
        Figura(string col) : color(col){

        }
        string getColor(){
            return color;
        }

};

class Circulo: public Figura{

    private:
        double radio;
    public:
        Circulo(string col, double r) : Figura(col), radio(r){

        }

        double calcularArea(){
            return M_PI* pow(radio, 2);
        }

        double calcularPerimetro(){
            return 2*M_PI*radio;
        }
        void mostrarDatos(){
            cout<<"---CIRCULO---"<<endl;
            cout<<"Color: "<<color<<endl;
            cout<<"Radio: "<<radio<<endl;
            cout<<"Area: "<<calcularArea()<<endl;
            cout<<"Perimetro: "<<calcularPerimetro()<<endl;

        }

};

 int main(){

    return 0;
 }