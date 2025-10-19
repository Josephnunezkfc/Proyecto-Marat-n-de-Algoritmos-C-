#include <iostream>
using namespace std;
struct Nodo{ int val; Nodo* sig; Nodo(int v):val(v),sig(nullptr){} };
class Lista{
    Nodo* head;
public:
    Lista():head(nullptr){} ~Lista(){ while(head){ Nodo* t=head; head=head->sig; delete t; } }
    void insertarInicio(int v){ Nodo* n=new Nodo(v); n->sig=head; head=n; }
    void eliminar(int v){ Nodo* cur=head; Nodo* prev=nullptr; while(cur&&cur->val!=v){ prev=cur; cur=cur->sig; } if(!cur) return; if(!prev) head=cur->sig; else prev->sig=cur->sig; delete cur; }
    void mostrar(){ for(Nodo* p=head;p;p=p->sig) cout<<p->val<<" "; cout<<"\n"; }
};
int main(){ Lista L; L.insertarInicio(10); L.insertarInicio(20); L.mostrar(); L.eliminar(10); L.mostrar(); }
