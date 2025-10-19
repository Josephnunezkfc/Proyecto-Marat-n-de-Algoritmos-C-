#include <iostream>
using namespace std;
struct Nodo{ int v; Nodo* s; Nodo(int x):v(x),s(nullptr){} };
bool tieneCiclo(Nodo* h){ Nodo *slow=h,*fast=h; while(fast&&fast->s){ slow=slow->s; fast=fast->s->s; if(slow==fast) return true; } return false; }
int main(){ Nodo* a=new Nodo(1); a->s=new Nodo(2); a->s->s=new Nodo(3); a->s->s->s=a->s; cout<<tieneCiclo(a)<<"
"; }
