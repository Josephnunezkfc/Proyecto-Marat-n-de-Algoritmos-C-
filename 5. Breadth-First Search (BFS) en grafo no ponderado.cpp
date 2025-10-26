#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> bfs(int src, const vector<vector<int>>& g){
    int n=g.size(); vector<int> dist(n,-1); queue<int> q;
    dist[src]=0; q.push(src);
    while(!q.empty()){
        int u=q.front(); q.pop();
        for(int v: g[u]) if(dist[v]==-1){ dist[v]=dist[u]+1; q.push(v); }
    }
    return dist;
}
int main(){
    vector<vector<int>> g={{1},{0,2,3},{1},{1}};
    auto d=bfs(0,g);
    for(int x: d) cout<<x<<" ";
    cout<<"\n";
    return 0;
}
