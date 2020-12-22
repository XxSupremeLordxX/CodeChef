#include <bits/stdc++.h>
using namespace std;
#define M 1000000009
#define ll long long int
#define fi first    
#define se second

void solve(){
    ll n,s,v,p,max=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s>>p>>v;
       if(max<(p/(s+1))*v){
           max = (p/(s+1))*v;
       }
    }
    cout<<max;
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