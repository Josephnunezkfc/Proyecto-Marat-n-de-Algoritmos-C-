
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Libro{ string titulo; string autor; int anio; };
int main(){
    vector<Libro> v = {{"A","X",2000},{"B","Y",1990},{"C","Z",2010}};
    sort(v.begin(), v.end(), [](const Libro& a, const Libro& b){ return a.anio < b.anio; });
    for(auto &l: v) cout<<l.titulo<<" ("<<l.anio<<")\n";
    return 0;
}
