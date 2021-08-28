#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool topoSort(ll N, vector<ll> adj[]){
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

    ll cnt = 0;

    //vector<ll> topo;

    while(!q.empty()){

        ll node = q.front();
        q.pop();
        cnt++;
        // topo.push_back(node);

        for(auto it : adj[node]){
            indegree[it]--;
            if(indegree[it] == 0){
                q.push(it);
            }
        }

    }
    // for(ll i=0; i<topo.size(); i++){
    //     cout<<topo[i]<<" ";
    // }
    // cout<<endl;
    if(cnt==N)
    return false;
    return true;
}



int main(){
    
        ll V,E;
        cin>>V>>E;

        vector<ll> adj[V];

        for(ll i=0; i<E; i++){
            ll u,v;
            cin>>u>>v;

            adj[u].push_back(v);
        }
        if(topoSort(V, adj))
        cout<<"YEs ity contains cycle";
        else
        cout<<"NO";


    
}



//tc - o[n]
/*
test cases-
4 4
0 1
1 2
2 3
3 1

yes
*/