#include <iostream>
#include <vector>
using namespace std;
class Matriz{
    vector<vector<int>> a;
public:
    Matriz(int n,int m):a(n,vector<int>(m,0)){}
    void set(int i,int j,int v){ a[i][j]=v; }
    void transponer(){
        int n=a.size();
        for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) swap(a[i][j], a[j][i]);
    }
    void mostrar(){ for(auto &row:a){ for(int x:row) cout<<x<<" "; cout<<"\n"; } }
};
int main(){ Matriz M(2,2); M.set(0,0,1); M.set(0,1,2); M.set(1,0,3); M.set(1,1,4); M.transponer(); M.mostrar(); }
