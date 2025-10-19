#include <iostream>
using namespace std;
struct Nodo{ int val; Nodo* sig; Nodo(int v):val(v),sig(nullptr){} };
int maxLista(Nodo* head){ if(!head) return INT_MIN; int mx=head->val; for(Nodo* p=head;p;p=p->sig) if(p->val>mx) mx=p->val; return mx; }
int main(){ Nodo* a=new Nodo(3); a->sig=new Nodo(7); a->sig->sig=new Nodo(2); cout<<maxLista(a)<<"
"; return 0; }
