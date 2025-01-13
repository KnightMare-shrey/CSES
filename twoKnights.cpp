#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll solve(int n){
        ll totalSq=n*n;
        ll allPos=((totalSq)*(totalSq-1))/2;
        ll attack=4*(n-1)*(n-2);
        return allPos-attack; 
}
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1) cout<<0<<endl;
        else if(i==2) cout<<6<<endl;
        else{
            cout<<solve(i)<<endl;
        }
    }
    return 0;
}