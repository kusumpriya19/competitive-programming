#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    ll n,m,source;
    cin>>n>>m;

    vector<pair<ll,ll>> adj[n+1];

    ll a,b,wt;
    for(ll i=0; i<m; i++){
        cin>>a>>b>>wt;
        adj[a].push_back(make_pair(b,wt));
        adj[b].push_back(make_pair(a,wt));
    }

    cin>>source;
    // Dijkstra's algorithm begins from here

    priority_queue<pair<ll,ll>,vector<pair<ll,ll> >, greater<pair<ll,ll>>> pq;       //min-heap; priority queue
    vector<ll> distTo(n+1,INT_MAX);   //1-indexed array for calculating shortest paths

    distTo[source] = 0;
    pq.push(make_pair(0,source));    //(dist,node)

    while( !pq.empty() ){

        ll dist = pq.top().first;
        ll prev = pq.top().second;
        pq.pop();

        for(auto it : adj[prev]){
            ll next = it.first;
            ll nextDist = it.second;

            if( distTo[next] > distTo[prev] + nextDist ){

                distTo[next] = distTo[prev] + nextDist;
                pq.push(make_pair(distTo[next], next));

            }
        }

    }

    for(ll i=1; i<=n; i++){
        cout<<distTo[i]<<" ";
    }
    cout<<endl;





}


/*5 6 
1 4 1
1 2 2
2 3 4
4 3 2 
2 5 5
5 3 1
1

0 2 3 1 4

tc - o(n)

*/