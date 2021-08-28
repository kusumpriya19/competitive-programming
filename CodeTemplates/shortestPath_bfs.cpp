#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void bfs(vector<ll> adj[], ll n, ll src){

    ll dist[n];
    for(ll i=0; i<n; i++){
        dist[i] = INT_MAX;
    }
    queue<ll> q;
    dist[src] = 0;
    q.push(src);

    while(!q.empty()){
        ll node = q.front();
        q.pop();

        for(auto it : adj[node]){
            if(dist[node]+1 < dist[it]){
                dist[it] = dist[node] + 1;
                q.push(it);
            }
        }
    }
    for(ll i=0; i<n; i++){
        cout<<dist[i]<<" ";
    }


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
    bfs(adj,V,0);
}


// strivers - https://www.youtube.com/watch?v=hwCWi7-bRfI&list=PLgUwDviBIf0rGEWe64KWas0Nryn7SCRWw&index=16

// tc - o(n+e); vertice + edges
/*
7 8
0 1
0 3
1 3
1 2
2 6
3 4
4 5
5 6

0 1 2 1 2 3 3
*/