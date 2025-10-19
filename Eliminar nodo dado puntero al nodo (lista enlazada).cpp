#include <iostream>
using namespace std;
struct Nodo{ int v; Nodo* s; Nodo(int x):v(x),s(nullptr){} };
void eliminarNodo(Nodo* n){ if(!n || !n->s) return; Nodo* t=n->s; n->v=t->v; n->s=t->s; delete t; }
int main(){ Nodo* a=new Nodo(1); a->s=new Nodo(2); a->s->s=new Nodo(3); eliminarNodo(a->s); for(Nodo*p=a;p;p=p->s) cout<<p->v<<" "; cout<<"
"; }
