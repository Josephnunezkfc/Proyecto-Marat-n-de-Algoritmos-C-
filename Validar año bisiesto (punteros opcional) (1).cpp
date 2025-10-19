#include <iostream>
using namespace std;
bool esBisiesto(int* y){ int a=*y; return (a%4==0 && a%100!=0) || (a%400==0); }
int main(){ int y; cin>>y; cout<<(esBisiesto(&y)? "Bisiesto":"No bisiesto")<<"\n"; }
