#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
pair<ll,ll> solve(vector<ll> &a,ll n,ll k){
    ll a_idx=-1,b_idx=-1;
    ll sum=0;
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        
        ll rem=k-a[i];
        if(mp.find(rem)!=mp.end()){
            return {mp[rem]+1,i+1};
        }
        mp[a[i]]=i;
    }
    return {-1,-1};
}
int main(){
    ll n,k;cin>>n>>k;
    vector<ll> a(n);
    map<ll,ll> mp;
    for(int i=0;i<n;i++) cin>>a[i];
    pair<ll,ll> res=solve(a,n,k);
    if(res.first==-1){
        cout<<"IMPOSSIBLE"<<endl;
    }else{
        cout<<res.first<<" "<<res.second<<endl;
    }
    return 0;

}