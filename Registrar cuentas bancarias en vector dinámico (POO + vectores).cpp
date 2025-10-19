#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Cuenta {
    string titular; double saldo;
public:
    Cuenta(string t,double s=0):titular(t),saldo(s){}
    void depositar(double m){ if(m>0) saldo+=m; }
    bool retirar(double m){ if(m>0 && m<=saldo){ saldo-=m; return true;} return false; }
    void mostrar() const { cout<<titular<<": "<<saldo<<"\n"; }
};
int main(){
    vector<Cuenta> bancos;
    bancos.emplace_back("Ana",100);
    bancos.emplace_back("Luis",50);
    bancos[0].depositar(25);
    for(auto &c: bancos) c.mostrar();
    return 0;
}

