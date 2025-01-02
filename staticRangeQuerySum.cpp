#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,q;cin>>n>>q;
    vector<ll>a(n+1);
    vector<ll>p(n+1);
    p[0]=0;
    for(int i=1;i<a.size();i++){
        cin>>a[i];
        p[i]+=a[i]+p[i-1];
    }

    while(q--){
        ll a,b;
        cin>>a>>b;
        cout<<p[b]-p[a-1]<<endl;
    }

    return 0;
}