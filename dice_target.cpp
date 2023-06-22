//number of ways to have the target by throwing the dice
#include<bits/stdc++.h>
using namespace std;
/*int solve(int sum){
	if(sum==0) return 1;
	int ans=0;
	for(int i=1;i<=6;i++){
		if(sum>=i){
			ans+=solve(sum-i);
		}
	}
	return ans;
}
*/



//==============================================================

//print possible ways

/*void solve(int sum,vector<vector<int>> &ans,vector<int>&temp){
	
	if(sum==0){
		ans.push_back(temp);
		return;
	}
	
	for(int i=1;i<=6;i++){
		if(sum>=i){
			temp.push_back(i);
			solve(sum-i,ans,temp);
			temp.pop_back();
		}
	}
}*/




//=======================================================================


//find minimum steps to make the target

int min_step(int sum){
	if(sum==0) return 0;
	int ans=INT_MAX;
	for(int i=1;i<=6;i++){
		if(sum>=i){
			ans=min(ans, 1+min_step(sum-i));
		}
	}
	return ans;
}
int main() {
    int sum;
    	cin >> sum;    
    	//vector<vector<int>> ans;
    	//vector<int>temp;
    	//solve(sum, ans,temp);

    /*for (int i = 0; i < ans.size(); i++) {
    		for (int j = 0; j < ans[i].size(); j++) {
    		        cout << ans[i][j] << " ";
 	        }
        	cout << endl;
     }*/
	cout<<min_step(sum)<<endl;
    return 0;
}


//what is you want to show those ways
//make vector<vector<int>> ans()
