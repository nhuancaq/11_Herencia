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

class Rectangulo: public Figura {
    private:
        double base;
        doubke altura;
    public:
        Rectangulo(string col, double b, double h) : Figura(col), base(b),altura(h){

        }
        double calcularArea(){
            return base * altura;
        }
        void mostrarDatos(){
            cout<<"---RECTANGULO---"<<endl;
            cout<<"Color: "<<color<<endl;
            cout<<"Base: "<<base<<endl;
            cout<<"Area: "<<calcularArea()<<endl;

        }
};

class Triangulo : public Figura{

    private:
        double base;
        double altura;
        string tipo;
    public:
        Triangulo(string col, double b, double h, string t)
        : Figura(col), base(b), altura(h), tipo(t) {

        }
        double calcularArea(){
            return(base*altura) /2.0;
        }
        void mostrarDatos(){
            cout<<"---TRIANGULO---"<<endl;
            cout<<"Color: "<<color<<endl;
            cout<<"Tipo: "<<tipo<<endl;
            cout<<"Base: "<<base<<endl;
            cout<<"Area: "<<calcularArea()<<endl;
        }

};


 int main(){

    return 0;
 }