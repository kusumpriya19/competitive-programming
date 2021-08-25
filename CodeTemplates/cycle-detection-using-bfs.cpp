
#include<bits/stdc++.h>
using namespace std;
#define ll long long int


bool checkForCycle(ll s, ll V, vector<ll> adj[], vector<ll> &vis){
    queue<pair<ll,ll>> q;
    vis[s] = true;
    q.push({s, -1});

    while(!q.empty()){
        
        ll node = q.front().first;
        ll par = q.front().second;
        q.pop();

        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it] = true;
                q.push({it, node});
            }
            else if(par != it)
            return true;
        }
    }
    return false;
}


bool isCycle(ll V, vector<ll>adj[]){
    vector<ll> vis(V+1, 0);
    for(ll i=1; i<=V; i++){
        if(!vis[i]){
            if(checkForCycle(i, V, adj, vis))
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
    if(ans==1){
        cout<<"YES";
    }
    else
    cout<<"NO";

    return 0;

}


// tc - O(N+E) sc - O(N)
/*   input - 11 10
1 2
2 4
3 5
5 6
6 7
7 8
8 11
8 9
9 10
5 10

output - yes;
*/