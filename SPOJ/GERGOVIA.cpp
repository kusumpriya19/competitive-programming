// https://www.spoj.com/problems/GERGOVIA/
// greedy solution

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





void kkkuuu(ll n){
  
 
  
  // Doesn't matter the order in which you distribute the wine to houses. Could do furthest house
    // first or closest house first, because you pay for either choice equally when moving to the right.
    // When you move to the right, you know you're gonna have to travel through the house you're leaving
    // from for each existing demand to the left. So each existing demand contributes an extra work unit
    // as we move through that house in order to satisfy it in some undetermined selling/buying process.
  
  ll a[n];
  loop(i,0,n)
  cin>>a[i];

  ll minwork = 0;
  ll bal =0;
  loop(i,0,n){
    minwork += abs(bal);
    bal += a[i];
  }
  cout<<minwork<<endl;

  



  


}

  


 
int main(){
    fast;

    // ll te=1;
    // // cin>>te;
    // while(te--){
    //     ktk++;
        // cout<<"Case "<<ktk<<": ";
        while(true){
        ll n; cin>>n;
        if(n==0)
        return 0;
        else
        kkkuuu(n);
        }
              
    

        
     

    return 0;  
        
}
 
