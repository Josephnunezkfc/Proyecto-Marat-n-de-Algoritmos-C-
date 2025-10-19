#include <iostream>
#include <string>
using namespace std;
class Libro {
    string titulo, autor;
    int anio;
public:
    Libro(string t,string a,int y):titulo(t),autor(a),anio(y){}
    void mostrar() const { cout<<titulo<<" - "<<autor<<" ("<<anio<<")\n"; }
};
int main(){
    Libro l("1984","Orwell",1949); l.mostrar(); return 0;
}
