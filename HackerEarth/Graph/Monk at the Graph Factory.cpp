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
 
	ll n; cin>>n;
	ll arr[n];
	rep(i,0,n)
	cin>>arr[i];
	ll sum=0;
	rep(i,0,n)
	sum+=arr[i];
	ll ans = sum/2;
	// cout<<sum;
	if(ans+1==n)
	cout<<"Yes";
	else
	cout<<"No";
	
 
 
	
    return 0;
 
}