#include <iostream>
using namespace std;
struct Nodo{ int v; Nodo* sig; Nodo(int x):v(x),sig(nullptr){} };
void insertarFinal(Nodo*& h,int x){ if(!h){ h=new Nodo(x); return;} Nodo* p=h; while(p->sig) p=p->sig; p->sig=new Nodo(x); }
void mostrar(Nodo* h){ for(Nodo*p=h;p;p=p->sig) cout<<p->v<<" "; cout<<"
"; }
int main(){ Nodo* h=nullptr; insertarFinal(h,5); insertarFinal(h,7); mostrar(h); return 0; }
