#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
int max_page(int index, vector<int> &page,vector<int>& price, int &budget,dp){
	
	if(index==0){
		if(price[index]<=budget) return page[index];
		else return 0;
	}
	int t=0;
	if(budget>=price[index]){
		t=max_page(index-1,page,price,budget-price[index],dp)+page[index];
		
	}
	int nt=max_page(p,index-1,page,price,budget,dp);
	
	return max(t,nt);
}
int dp[1000100];
void solve(){
	int n,budget;cin>>n>>budget;
	vector<int> price;
	vector<int> page;
	for(int i=0;i<n;i++){
		cin>>price[i];
	}
	for(int i=0;i<n;i++){
		cin>>page[i];
	}
	int p=0;
	int ans=max_page(p,n-1,page,price,budget);
	cout<<ans<endl;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
}
