//https://www.geeksforgeeks.org/maximum-length-substring-having-all-same-characters-after-k-changes/
//referred from above link




#include <bits/stdc++.h>
 
 
#define fast      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll              long long
using namespace std;


ll findlen(string& A, ll n, ll k, char ch){
    ll maxlen = 1;
    ll cnt=0, lo=0, high=0;

    while(high < n){
        if(A[high] != ch){
            cnt++;
        }
        while(cnt>k){
            if(A[lo] != ch){
                cnt--;
            }
            lo++;
        }
        maxlen= max(maxlen, high-lo+1);
        high++;
    }
    return maxlen;
}


int main(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll maxlen = 1;
    maxlen = max(maxlen,findlen(s,n,k,'a'));
    maxlen = max(maxlen,findlen(s,n,k,'b'));
    maxlen = max(maxlen,findlen(s,n,k,'c'));
    cout<<maxlen<<endl;
    

}