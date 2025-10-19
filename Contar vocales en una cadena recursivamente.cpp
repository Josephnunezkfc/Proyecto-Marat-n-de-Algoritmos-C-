#include <iostream>
#include <string>
using namespace std;
bool esVocal(char c){ c=tolower(c); return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'; }
int contar(const string& s,int i){ if(i>=s.size()) return 0; return (esVocal(s[i])?1:0)+contar(s,i+1); }
int main(){ string s; getline(cin,s); cout<<contar(s,0)<<"\n"; }
