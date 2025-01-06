#include<bits/stdc++.h>
using namespace std;

// int solve(vector<int> a,int sum){
//     if(sum==0) return 1;
//     int ans=0;
//     for(int i=0;i<a.size();i++){
//         if(sum>=a[i]){
//             ans+=solve(a,sum-a[i]);
//         }
//     }
//     return ans;
// }
int main(){
    int mod=1e9+7;
    int n,sum;cin>>n>>sum;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    // cout<<solve(a,sum)<<endl;
    vector<int> dp(sum+1,0);
    dp[0]=1;
    for(int i=1;i<=sum;i++){
        for(int k=0;k<n;k++){
            if(a[k]<=i){
                (dp[i]+=dp[i-a[k]])%=mod;
            }   
        }
    }
    cout<<dp[sum]<<endl;  
    return 0;
}

// 1 1 
// 1