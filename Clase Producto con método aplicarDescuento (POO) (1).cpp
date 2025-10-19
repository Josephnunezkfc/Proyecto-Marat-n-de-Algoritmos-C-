#include <iostream>
#include <string>
using namespace std;
class Producto {
    string nombre; double precio;
public:
    Producto(string n,double p):nombre(n),precio(p){}
    void aplicarDescuento(double pct){ if(pct>0 && pct<=100) precio -= precio*(pct/100.0); if(precio<0) precio=0; }
    double obtenerPrecio() const { return precio; }
};
int main(){
    Producto p("Camisa",50.0);
    p.aplicarDescuento(20);
    cout<<"Precio: "<<p.obtenerPrecio()<<"
";
    return 0;
}
