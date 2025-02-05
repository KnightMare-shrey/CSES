#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(vector<ll> &a){
    ll res=1;
    ll n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]>res){
            return res;
        }
        res+=a[i];
    }
    return res;
}
int main(){
    ll n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    cout<<solve(a)<<endl;
    return 0;
}