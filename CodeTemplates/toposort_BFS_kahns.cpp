

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void topoSort(ll N, vector<ll> adj[]){
    queue<ll> q;
    vector<ll> indegree(N, 0);

    for(ll i=0; i<N; i++){
        for(auto it: adj[i]){
            indegree[it]++;
        }
    }

    for(ll i=0; i<N; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    vector<ll> topo;

    while(!q.empty()){

        ll node = q.front();
        q.pop();
        topo.push_back(node);

        for(auto it : adj[node]){
            indegree[it]--;
            if(indegree[it] == 0){
                q.push(it);
            }
        }

    }
    for(ll i=0; i<topo.size(); i++){
        cout<<topo[i]<<" ";
    }
    cout<<endl;
}



int main(){
    ll te; cin>>te;
    while(te--){
        ll V,E;
        cin>>V>>E;

        vector<ll> adj[V];

        for(ll i=0; i<E; i++){
            ll u,v;
            cin>>u>>v;

            adj[u].push_back(v);
        }
        topoSort(V, adj);
    }
}



//tc - o[n]
/*
test case-  2
6 6
5 0
4 0
4 1
3 1
2 3
5 2
4 4
0 1
2 1
3 0
3 2

output
4 5 0 2 3 1 
3 0 2 1
*/