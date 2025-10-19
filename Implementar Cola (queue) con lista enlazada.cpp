#include <iostream>
using namespace std;
struct Nodo{ int val; Nodo* sig; Nodo(int v):val(v),sig(nullptr){} };
class Cola{
    Nodo *head, *tail;
public:
    Cola():head(nullptr),tail(nullptr){} ~Cola(){ while(head){ Nodo* t=head; head=head->sig; delete t;} }
    void enqueue(int v){ Nodo* n=new Nodo(v); if(!tail) head=tail=n; else { tail->sig=n; tail=n;} }
    void dequeue(){ if(head){ Nodo* t=head; head=head->sig; if(!head) tail=nullptr; delete t;} }
    int front(){ return head?head->val:-1; }
    bool empty(){ return head==nullptr; }
};
int main(){ Cola q; q.enqueue(5); q.enqueue(7); cout<<q.front()<<"\n"; q.dequeue(); cout<<q.front()<<"\n"; }
