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
    ll n,s=1;
    cin>>n;
    if(n%2==0){
        for(int i=1;i<=n*n;i+=n){
            if(s==1){
            for(int j=i;j<=i+n-1;j++){
                cout<<j<<" ";
            }
            s=s*-1;
            }
            else{
            for(int j=i+n-1;j>=i;j--){
                cout<<j<<" ";
            }
            s=s*-1;
            }
            cout<<"\n";
        }
    }
    else{
        rep(i,1,n*n){
            if(i%n==0)
                cout<<i<<"\n";
            else
                cout<<i<<" ";
        }
    }
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