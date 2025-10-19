#include <iostream>
#include <string>
using namespace std;
class CuentaBancaria {
    string titular; double saldo;
public:
    CuentaBancaria(string t,double s=0):titular(t),saldo(s){}
    void depositar(double m){ if(m>0) saldo+=m;}
    bool retirar(double m){ if(m>0 && m<=saldo){ saldo-=m; return true;} return false; }
    double obtenerSaldo() const { return saldo; }
};
int main(){
    CuentaBancaria c("Ana",100.0); c.depositar(50); bool ok=c.retirar(120);
    cout<<"Saldo: "<<c.obtenerSaldo()<<" OK? "<<ok<<"\n"; return 0;
}
