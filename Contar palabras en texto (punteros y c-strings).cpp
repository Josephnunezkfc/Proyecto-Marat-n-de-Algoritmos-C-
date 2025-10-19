#include <iostream>
#include <cstring>
using namespace std;
int contarPalabras(char* s){ int c=0; bool in=false; for(int i=0;i<strlen(s);i++){ if(!isspace(s[i]) && !in){ in=true; c++; } else if(isspace(s[i])) in=false; } return c; }
int main(){ char s[500]; cin.getline(s,500); cout<<contarPalabras(s)<<"\n"; }
