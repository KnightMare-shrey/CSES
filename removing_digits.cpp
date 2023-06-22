#include<bits/stdc++.h>
using namespace std;
#define int long long
int dp[1000100];
set<int> getdigits(int x){
	set<int> s;
	while(x){
		s.insert(x%10);
		x=x/10;
	}
	
	return s;
}

void solve(int n){
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		if(i==0) dp[i]=0;
		else{
			dp[i]=INT_MAX;
			for(auto it: getdigits(i)){
				if(i>=it) dp[i]=min(dp[i],1+dp[i-it]);
			}
		}
	}
	
	cout<<dp[n]<<endl; 
}
int main(){
	ios_base::syn_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;cin>>n;
}
