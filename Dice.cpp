#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int MOD=1e9+7;
    int n;cin>>n;
    vector<int>dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6 && j<=i;j++){
            (dp[i]+=dp[i-j])%=MOD;
        }
    }

    cout<<dp[n]<<endl;
    return 0;
}