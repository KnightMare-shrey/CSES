#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(vector<ll> &a){
   ll ans=1;
   ll s=0,e=0;
   ll n=a.size();
   map<ll,ll> mpp;
   while(e<n){
    if(mpp.find(a[e])!=mpp.end()){
        s=max(mpp[a[e]]+1,s);
    }
    mpp[a[e]]=e;
    ans=max(ans,e-s+1);
    e++;
   }
   return ans;
}
int main(){
    ll n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<solve(a)<<endl;
    return 0;
}


// 10
// 2 2 1 1 2 1 2 1 2 1