#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 1000001;



void dfs(ll node, vector<ll> &vis, vector<ll> adj[], vector<ll> &storeDfs){
    storeDfs.push_back(node);
    vis[node] = 1;
    for(auto it: adj[node]){
        if(!vis[it]){
            dfs(it, vis, adj, storeDfs);
        }
    }
}


int main(){


    ll V,E;
    cin>>V>>E;

    vector<ll> adj[V+1];
    vector<ll> storeDfs;
    vector<ll> vis(V+1, 0);
    
    for(ll i=0; i<E; i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    for(ll i=1; i<=V; i++){
        if(!vis[i]){
            dfs(i, vis, adj, storeDfs);
        }
    }
    for(ll i=0; i<storeDfs.size(); i++){
        cout<<storeDfs[i]<<" ";
    }


}