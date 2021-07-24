#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
#define vec     vector<ll>
#define mod     1e9+7
#define inf     1e18
#define pb      push_back
#define F      first
#define S      second
#define rep(i,a,b)   for(ll i=a; i<b; i++)
#define w(t)    ll t; cin>>t; while(t--)
 
 
 
 
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
 
	
 
	w(te){
		ll n; cin>>n;
		set<ll>s;
		while(n--){
			ll a,b; cin>>a>>b;
			s.insert(a);
			s.insert(b);
 
		}
		ll ans = s.size();
		cout<<ans<<"\n";
		
		
		
 
 
 
	}
 
 
	
    return 0;
 
}
 
 
 
Language: C++17