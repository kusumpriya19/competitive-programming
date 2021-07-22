#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a;
    cin>>a;
    int arr[a][a];
    for(int i=0; i<a;i++){
        for(int j=0; j<a; j++){
            cin>>arr[i][j];
        }
    }
    int left=0, right=0;
    for(int i=0; i<a; i++){
        left += arr[i][i];
        right += arr[i][a-i-1];
    }
    cout<<abs(left-right);
    return 0;
    
}
