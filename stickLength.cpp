#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    ll res=0;
    ll mid=a.size()/2;
    for(int i=0;i<n;i++){
        res+=abs(a[i]-a[mid]);
    }
    cout<<res<<endl;
    return 0;
}