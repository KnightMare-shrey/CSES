//number of ways to form agiven number by dice


#include<bits/stdc++.h>
using namespace std;
#define int long long;
int dp[1000100];
int mod=1e9+7;
void solve(int x){
	for(int i=0;i<x;i++){
		if(i==0) dp[i]=1;
		dp[i]=0;
		else{
			for(int j=1;j<=6;j++){
				if(x>=j){
					dp[i]+=dp[i-j];
				}
			}
			dp[i]%=mode;
		}
	}
	
	cout<<dp[x]<<endl;
}
signed main(){
	ios_base::synch_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int x;cin>>x;
	solve(x);
}


//======================================================================



//optimal way to make target sum using coin
//number of coin to make the target
void solve(vector<int> coin,int target){
	for(int i=0;i<target;i++){
		if(i==0){
			dp[i]=0;// no coin can make the sum 0
		}else{
			dp[i]=INT_MAX;
			for(int j=0;j<coin.size();j++){
				dp[i]=min(1+dp[i-c[j],dp[i]);
			}
			
			dp[i]%=mod;
		}
	}
	
	cout<<dp[target]<<endl;
}
	
//=================================================================

//coin combination one cses
//ex {2.3.5} sum=9  2 2 5/5 2 2/ 2 5 2/3 3 3/2 2 2 3/2 2 3 2/2 3 2 2/3 2 2 2 output=8

void solve(int x){
	for(int i=0;i<x;i++){
		if(i==0) dp[i]=1;
		
		else{
			dp[i]=0;
			for(int j=1;j<=6;j++){
				if(x>=j){
					dp[i]+=dp[i-j];
				}
			}
			dp[i]%=mode;
		}
	}
	
	cout<<dp[x]<<endl;
}


//==================================================================
//count different ways no combinatin
