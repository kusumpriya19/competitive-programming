#include <bits/stdc++.h>
 
 
#define fast      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll              long long
using namespace std;


void bfsOfGraph(ll V, vector<ll> adj[]){
    vector<ll> bfs;
    vector<ll> vis(V+1, 0);

    for(ll i=1; i<=V; i++){      //loop in case graph has multiple components
        if(!vis[i]){
            queue<ll> q;
            q.push(i);
            vis[i] = 1;
            while(!q.empty()){
                ll node = q.front();
                q.pop();
                bfs.push_back(node);
                // cout<<node;
                
        

                for(auto it : adj[node]){
                    if(!vis[it]){
                        q.push(it);
                        vis[it] = 1;
                    }
                }
            }

        }
    }
    
    for(ll i=0; i<bfs.size(); i++){
        cout<<bfs[i]<<" ";
    }
    cout<<endl;

}




int main(){
    ll tc;
    cin>>tc; //for multiple graphs
    while(tc--){
        ll V,E;
        cin>>V>>E;

        vector<ll> adj[V+1];

        for(ll i=0; i<E; i++){
            ll u,v; 
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);   //comment this for directed graph

        }
        
        bfsOfGraph(V, adj);
        

        // vector<ll> ans = bfsOfGraph(V, adj);
        // for(ll i=0; i<ans.size(); i++){
        //     cout<<ans[i]<<" ";
        // }
        // cout<<endl;

    }
    return 0;
}



//time complexity - O(V+E)  SC - O(N)