#include <iostream>
using namespace std;
struct Stack{ int *a; int cap; int top; Stack(int c=10):cap(c),top(0){ a=new int[cap]; } ~Stack(){ delete[] a; } void push(int v){ if(top==cap){ int*n=new int[cap*2]; for(int i=0;i<cap;i++) n[i]=a[i]; delete[] a; a=n; cap*=2;} a[top++]=v;} void pop(){ if(top>0) top--; } int peek(){ return top>0?a[top-1]:-1; } bool empty(){ return top==0; } };
int main(){ Stack s; s.push(1); s.push(2); s.push(3); Stack t; while(!s.empty()){ t.push(s.peek()); s.pop(); } while(!t.empty()){ cout<<t.peek()<<" "; t.pop(); } cout<<"
"; }
