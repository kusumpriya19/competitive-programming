//https://www.spoj.com/problems/DEFKIN/
// greedy problem 

// DRINK MORE WATER
// CREATED BY KUSUM (◍•ᴗ•◍)
 
 
#include <bits/stdc++.h>
 
 
#define fast      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll            long long
#define dd           double
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
#define leadzero        __builtin_clzll //count leading zeroes in binary
#define tailzero        __builtin_ctz //coutn tail zero
#define pb              push_back
#define popb            pop_back
#define pfrt            push_front
#define popfrt          pop_front
#define lb              lower_bound
#define ub              upper_bound
// #define gcd             __gcd
#define F               first
#define S               second
#define yes             cout<<"YES"<<endl
#define no              cout<<"NO"<<endl
#define endl            "\n"
#define all(v)          v.begin(),v.end()
#define revall(v)       v.end(),v.begin()
#define MEM(a, b)       memset(a, (b), sizeof(a))    
#define loop(i,a,b)     for(ll i=a;i<b;i++)
#define rev(i,a,b)      for(ll i=b-1;i>=a;i--)
#define foreach(it,l)   for(auto it=l.begin();it!=l.end();it++)
#define reveach(it,l)   auto it = l.end();it--;for(it;it!=l.begin();l--)
#define print(a,n)      for(ll i=0; i<n; i++){cout<<a[i]<<" ";}
 
#define PI           3.1415926535897932384626433832795
const ll M    =    1e9+7;
const ll iiii     =    1e6+5;
const ll pm = 1e5+5;
 
using namespace std;

   
// ________________________________________________________________________________________________________________
 
//CODE HERE.........


ll ktk=0;





void kkkuuu(){
  
  ll w,h,n; cin>>w>>h>>n;
  vll x(n+2);
  vll y(n+2);

  x[0] = 0;
  y[0] = 0;

  loop(i,1,n+1){
    cin>>x[i]>>y[i];
  }
  x[x.size()-1] = w+1;
  y[y.size()-1] = h+1;

  sort(all(x));
  sort(all(y));

  ll maxx = 0, maxy = 0;
  loop(i,0,x.size()-1){
    maxx = max(maxx, x[i+1]-x[i]-1);
    maxy = max(maxy, y[i+1]-y[i]-1);
  }
  cout<<maxx*maxy<<endl;



  


}

  


 
int main(){
    fast;

    ll te=1;
    cin>>te;
    while(te--){
        ktk++;
        // cout<<"Case "<<ktk<<": ";
        kkkuuu();
              
    }

        
     

    return 0;  
        
}
 
