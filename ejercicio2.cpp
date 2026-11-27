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

 int main(){

    return 0;
 }