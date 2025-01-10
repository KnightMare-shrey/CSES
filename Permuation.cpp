#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &ans,vector<int> &a,int freq[],vector<int> temp){
   if(temp.size()==a.size()){
        ans.push_back(temp);
        return ans;
    }
    for(int i=0;i<a.size();i++){
        if(!freq[i]){
            freq[i]=1;
            temp.push_back(a[i]);
            solve(ans,a,freq,temp);
            freq[i]=0;
            temp.pop_back();
        }
    }
}
int main(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> temp(n);
    int freq[n];
    for(int i=0;i<n;i++) freq[i]=0;
    solve(ans,a,freq,temp);
    return 0;
}



