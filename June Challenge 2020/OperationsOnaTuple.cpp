/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000009
#define ll long long int
#define fi first    
#define se second
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)

void solve(){
    ll p,q,r,x,y,z;
    cin>>p>>q>>r;
    cin>>x>>y>>z;
    ll d1 = x-p,d2=y-q,d3=z-r;
    if(d1==d2&&d2==d3){
        if(d2==0){
            cout<<"0";
            return;
        }
        else{
            cout<<"1";
            return;
        }
    }
    if((d1==d2&&d3==0)||(d3==d2&&d1==0)||(d1==d3&&d2==0)||(d1==d2==0)||(d3==d2==0)||(d1==d3==0)){
        cout<<"1";
        return;
    }
    ll m1,m2,m3;
    
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    rep(t,1,T){
        solve();
        cout<<"\n";
    }
    return 0;
}