#include <iostream>
#include <cstring>
using namespace std;
void invertir(char*s){ int l=0, r=strlen(s)-1; while(l<r){ char t=s[l]; s[l]=s[r]; s[r]=t; l++; r--; } }
int main(){ char s[100]; cin.getline(s,100); invertir(s); cout<<s<<"
"; }
