#include <iostream>
#include <string>
using namespace std;
class Persona {
    string nombre; int edad;
public:
    Persona(const string& n, int e):nombre(n),edad(e){}
    void saludar() const { cout<<"Hola, soy "<<nombre<<", tengo "<<edad<<" años.\n"; }
};
int main() {
    string nombre; int edad;
    cout<<"Nombre: "; getline(cin,nombre);
    cout<<"Edad: "; cin>>edad;
    Persona p(nombre,edad); p.saludar(); return 0;
}
