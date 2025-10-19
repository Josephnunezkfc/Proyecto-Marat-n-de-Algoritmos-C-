#include <iostream>
using namespace std;
struct Nodo{ int v; Nodo* s; Nodo(int x):v(x),s(nullptr){} };
int contarPares(Nodo* h){ int c=0; for(Nodo* p=h;p;p=p->s) if(p->v%2==0) c++; return c; }
int main(){ Nodo* h=new Nodo(2); h->s=new Nodo(3); h->s->s=new Nodo(4); cout<<contarPares(h)<<"
"; }
