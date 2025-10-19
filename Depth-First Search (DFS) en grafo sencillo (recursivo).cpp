
#include <iostream>
#include <vector>
using namespace std;
void dfs(int u, const vector<vector<int>>& g, vector<bool>& vis){
    vis[u]=true; cout<<u<<" ";
    for(int v: g[u]) if(!vis[v]) dfs(v,g,vis);
}
int main(){
    int n=5;
    vector<vector<int>> g={{1,2},{0,3},{0,4},{1},{2}};
    vector<bool> vis(n,false);
    dfs(0,g,vis);
    cout<<"\n";
    return 0;
}
