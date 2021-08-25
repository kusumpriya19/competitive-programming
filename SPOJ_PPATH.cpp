// CREATED BY KUSUM (◍•ᴗ•◍)
// DRINK MORE WATER
 
 
 
#include <bits/stdc++.h>
 
 
#define fast      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll              long long
#define ull             unsigned long long

 
// _________________________________________________________________________________________________________________
//COMMON DATA STRUCTURES
//----------------------
 
#define vll             vector<ll>
#define vstring         vector<string>
#define vpairll         vector<pair<ll,ll>>
#define mpll            map<ll,ll>
#define mpcl            map<char,ll>
#define setll           set<ll>
#define msetll          multiset<ll>
#define dq              deque<ll>
 
// ________________________________________________________________________________________________________________
//COMMON OPERATIONS 
//-----------------
 
#define setbits         __builtin_popcountll //count number of 1 in binary
// #define leadzero        __builtin_clz //count leading zeroes in binary
// #define tailzero        __builtin_ctz //coutn tail zero
#define pb              push_back
#define popb            pop_back
#define pfrt            push_front
#define popfrt          pop_front
#define lb              lower_bound
#define ub              upper_bound
#define gcd             __gcd
#define F               first
#define S               second
#define endl            "\n"
#define all(v)          v.begin(),v.end()
#define revall(v)       v.end(),v.begin()
#define MEM(a, b)       memset(a, (b), sizeof(a))    
#define loop(i,a,b)     for(ll i=a;i<b;i++)
#define rev(i,a,b)      for(ll i=b-1;i>=a;i--)
#define foreach(it,l)   for(auto it=l.begin();it!=l.end();it++)
#define reveach(it,l)   auto it = l.end();it--;for(it;it!=l.begin();l--)
 
 
#define PI           3.1415926535897932384626433832795
const ll nint     =    1e9+7;
const ll i1     =    1e6+5;
const ll num = 9e18;
 
using namespace std;

   
// ________________________________________________________________________________________________________________
 
//CODE HERE..........

vector<ll> adj[100001];
vector<ll> primes;

ll dist[100001], vis[100001];

bool isPrime(ll n){
    for(ll i=2; i*i<=n; i++){
        if(n%i == 0)
        return false;
    }
    return true;
}

bool isValid(ll a, ll b){
    ll cnt = 0;
    while(a>0){
        if(a%10 != b%10)
        cnt++;

       a /= 10;
       b /= 10; 

    }
    if(cnt==1)
    return true;
    return false;

}

void bfs(ll src){
    queue<ll> q;
    q.push(src);

    dist[src] = 0;
    vis[src] = 1;

    while(!q.empty()){

        ll curr = q.front();
        q.pop();

        for(ll child : adj[curr]){
            if(vis[child] == 0){
                vis[child] = 1;
                dist[child] = dist[curr] + 1;
                q.push(child);
            }
        }

    }

}

void buildGraph(){
    for(ll i=1000; i<=9999; i++){
        if(isPrime(i))
        primes.push_back(i);
    }

    for(ll i=0; i<primes.size(); i++){
        for(ll j=i+1; j<primes.size(); j++){
            ll a = primes[i];
            ll b = primes[j];

            if(isValid(a, b)){

                adj[a].push_back(b);
                adj[b].push_back(a);

            }
        }
    }
}

void kkkuuu(){
    
    ll a,b;
    cin>>a>>b;

    for(ll i=1000; i<=9999; i++){
        dist[i] = -1;
        vis[i]=0;
    }
    bfs(a);

    if(dist[b]==-1)
    cout<<"Impossible"<<endl;
    else
    cout<<dist[b]<<endl;
    
}
 
int main(){
    fast;

    ll tet = 1;
    cin>>tet;

    buildGraph();

    while(tet--){
        kkkuuu();

    }
    
   
    
    
}
 
