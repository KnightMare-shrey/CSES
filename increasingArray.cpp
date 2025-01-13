#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;cin>>n;
    vector<ll> a(n);
    ll steps=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll prev=a[0];

    for(int i=1;i<n;i++){
        if(prev>a[i]){
            steps+=abs(prev-a[i]);
            a[i]=prev;
        }
        prev=a[i];
    }
    cout<<steps<<endl;
    return 0;
}



// 10
// 6 10 4 10 2 8 9 2 7 7