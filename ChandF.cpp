#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi first    
#define se second

void solve(){
    ll l,r,z,x,y,r1=1;
    cin>>x>>y>>l>>r;
    while((r1-1)<=r){
        r1>>1;
    }
    if(x==0||y==0){
        cout<<"0";
        return;
    }
    if(x>r&&y>r){
        cout<<r1;
        return;
    }
    else if(x>r||y>r){
        ll max=(x&r1)*(y&r1);
        for(ll i=l;i<=r;i++){
            if((i&x)*(y&i)==max){
                cout<<i;
                return;
            }
        }
    }
    cout<<(x|y);
}
int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        solve();
        cout<<"\n";
    }
    return 0;
}