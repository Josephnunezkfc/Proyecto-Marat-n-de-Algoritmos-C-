#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Estudiante {
    string nombre;
    vector<double> notas;
public:
    Estudiante(const string& n): nombre(n) {}
    void agregarNota(double x){ if(x>=0) notas.push_back(x); }
    double promedio() const {
        if(notas.empty()) return 0.0;
        double s=0; for(double v: notas) s+=v; return s/notas.size();
    }
};
int main(){
    Estudiante e("Luis");
    e.agregarNota(8.5); e.agregarNota(7.0); e.agregarNota(9.0);
    cout<<"Promedio: "<<e.promedio()<<"
";
    return 0;
}
