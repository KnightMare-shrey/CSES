#include<bits/stdc++.h>
using namespace std;
main(){
    string s;
    cin>>s;
    long long int maxi=1;
    long long int temp=1;
    for(long long int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            temp+=1;
            maxi=max(maxi,temp);
        }else{
            temp=1;
        }
    }
    cout<<maxi<<endl;
    return 0;
}