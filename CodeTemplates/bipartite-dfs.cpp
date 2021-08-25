#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool bipartiteDfs(ll node, vector<ll> adj[], ll color[]){
    
    if(color[node] == -1)
    color[node] = 1;

    for(auto it : adj[node]){
        if(color[it] == -1){
            color[it] = 1 - color[node];
            if(!bipartiteDfs(it, adj, color))
            return false;

        }
        else if(color[it] == color[node])
            return false;
    }
    return true;
}

bool checkBipartite(vector<ll> adj[], ll n){
    ll color[n+1];
    memset(color, -1, sizeof color);
    for(ll i=1; i<=n; i++){
        if(color[i] == -1){
            if(!bipartiteDfs(i, adj, color)){
                return false;
            }
        }
    }
    return true;
}

int main(){
    ll n,m;
    cin>>n>>m;

    vector<ll> adj[n+1];
    for(ll i=0; i<m; i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if(checkBipartite(adj, n)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;


}



/*
8 8
1 2
2 3
3 4
4 5
5 8
8 2
5 6
6 7
no
*/
