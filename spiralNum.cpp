#include<bits/stdc++.h>
#define ll long long int
using namespace std;
// typedef long long ll;
int main(){
    int n;cin>>n;
    while(n--){
        ll row,col;cin>>row>>col;
        ll ans=0;
        if(row>=col){
            if(row&1){
                ll base=(row-1)*(row-1);
                ans=base+col;
            }else{
                ll base=row*row;
                ans=base-(col-1);   
            }
        }else{
            if(col&1){
                ll base=col*col;
                ans=base-(row-1);
            }else{
                ll base=(col-1)*(col-1);
                ans=base+(row);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}