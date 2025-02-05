#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll sum=INT_MIN;
    ll best=INT_MIN;
    for(int i=0;i<n;i++){
        sum=max((sum+a[i]),a[i]);
        best=max(sum,best);
    }
    cout<<best<<endl;
    return 0;
}