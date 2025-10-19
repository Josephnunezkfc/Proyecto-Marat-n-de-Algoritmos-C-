#include <iostream>
using namespace std;
void copiar(char* dest, const char* src) {
    while(*src) { *dest = *src; dest++; src++; }
    *dest = '\0';
}
int main() {
    char src[200]; char dest[200];
    cout<<"Ingrese texto: "; cin.ignore(); cin.getline(src,200);
    copiar(dest, src);
    cout<<"Copia: "<<dest<<"\n";
    return 0;
}
