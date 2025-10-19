#include <iostream>
using namespace std;
struct Nodo{ int v; Nodo* s; Nodo(int x):v(x),s(nullptr){} };
class Stack{ Nodo* topNode; public: Stack():topNode(nullptr){} ~Stack(){ while(topNode){ Nodo* t=topNode; topNode=topNode->s; delete t;} } void push(int x){ Nodo* n=new Nodo(x); n->s=topNode; topNode=n;} void pop(){ if(topNode){ Nodo* t=topNode; topNode=topNode->s; delete t;} } int top(){ return topNode?topNode->v:-1; } bool empty(){ return topNode==nullptr; } };
int main(){ Stack s; s.push(1); s.push(2); cout<<s.top()<<"
"; s.pop(); cout<<s.top()<<"
"; }
