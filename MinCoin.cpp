#include<bits/stdc++.h>
using namespace std;
// int solve(vector<int> a,int target){
//     if(target==0) return 0;
//     if(target<0) return 1e9;

//     int ans=1e9;
//     for(int i=0;i<a.size();i++){
//         if(target>=a[i]){
//             ans=min(ans,solve(a,target-a[i])+1);
//         }
//     }

//     return ans;
// }
int main(){
    int n,target;cin>>n>>target;
    vector<int> a(n);
    for(int i=0;i<n;i++){cin>>a[i];}
    // int res=solve(a,target);
    // cout<<(res==1e9?-1:res)<<endl;

    vector<int> dp(target+1,1e9);
    dp[0]=0;
    for(int i=1;i<=target;i++){
        for(int j=0;j<n;j++){
            if(a[j]<=i){
                dp[i]=min(dp[i],dp[i-a[j]]+1);
            }
        }
    }
    cout<<(dp[target]==1e9?-1:dp[target])<<endl;
    return 0;
}