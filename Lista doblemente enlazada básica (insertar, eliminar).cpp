#include <iostream>
using namespace std;
struct Node{ int v; Node* prev; Node* next; Node(int x):v(x),prev(nullptr),next(nullptr){} };
class DList{
    Node* head; Node* tail;
public:
    DList():head(nullptr),tail(nullptr){}
    ~DList(){ while(head){ Node* t=head; head=head->next; delete t; } }
    void push_back(int x){ Node* n=new Node(x); if(!tail){ head=tail=n; } else { tail->next=n; n->prev=tail; tail=n; } }
    void remove(int x){ for(Node* p=head;p;p=p->next) if(p->v==x){ if(p->prev) p->prev->next=p->next; else head=p->next; if(p->next) p->next->prev=p->prev; else tail=p->prev; delete p; return; } }
    void show(){ for(Node* p=head;p;p=p->next) cout<<p->v<<" "; cout<<"\n"; }
};
int main(){ DList L; L.push_back(1); L.push_back(2); L.push_back(3); L.remove(2); L.show(); }
