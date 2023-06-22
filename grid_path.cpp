#include<bits/stdc++.h>
using namespace std;
define int long long
int dp[1001][1001];
const int mod=1e9+7;
vector<string> arr;
void solve(){
	int n;cin>>n;
	arr.resize(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0 && j==0){
				dp[i][j]=1;
			}else{
				dp[i][j]=0;
				if(i) dp[][]+=dp[i-1][j];
				if(j) dp[][]+=dp[i][j-1];
			}
			if(dp[i][j]=='#) dp[i][j]=0;
		}
	}
	
	cout<<dp[n-1][n-1]<<endl;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
}
