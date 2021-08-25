#include<bits/stdc++.h>
using namespace std;
#define ll long long int

// 1- based indexing code


bool checkForCycle(ll node, ll par, vector<ll> &vis, vector<ll> adj[]){
    vis[node] = 1;
    for(auto it: adj[node]){
        if(!vis[it]){
            if(checkForCycle(it, node, vis, adj))
            return true;
        }
        else if(it != par)
        return true;
    }
    return false;

}

bool isCycle(ll V, vector<ll> adj[]){
    vector<ll> vis(V+1, 0);
    for(ll i=1; i<=V; i++){
        if(!vis[i]){
            if(checkForCycle(i, -1, vis, adj))
            return true;
        }
    }
    return false;
}

int main(){

    ll V,E;
    cin>>V>>E;

    vector<ll> adj[V+1];
    for(ll i=0; i<E; i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    ll ans = isCycle(V, adj);
    if(ans==1)
    cout<<"YEs";
    else
    cout<<"No";
    return 0;

}




// te = O(N) sc = O(N);
/*

8 7
1 3 
3 4
2 5
5 6
6 7
7 8
8 5
outp - yes
*/