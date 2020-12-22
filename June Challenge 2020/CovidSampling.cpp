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
    ll n,p,inp,a[64][64]={0},cnt;
    cin>>n>>p;
    cout<<"1 1 1 "<<n<<" "<<n<<"\n";
    cin>>cnt;
    vector <ll> rows,cols;
    rep(i,1,n){
        cout<<"1 "<<i<<" 1 "<<i<<" "<<n<<"\n";
        cin>>inp;
        rows.pb(inp);
    }
    rep(i,1,n){
        cout<<"1 1 "<<i<<" "<<n<<" "<<i<<"\n";
        cin>>inp;
        cols.pb(inp);
    }
    repi(i,n,1){
        repi(j,n,1){
            if(cols[j-1]==0){
                continue;
            }
            cout<<"1 "<<i<<" "<<j<<" "<<i<<" "<<j<<"\n";
            cin>>inp;
            if(inp==1){
                rows[i-1]--;
                cols[j-1]--;
            }
            a[i][j] = inp;
            if(rows[i-1]==0){
                break;
            }
        }
    }
    cout<<"2\n";
    rep(i,1,n){
        rep(j,1,n){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cin>>inp;
}
    
int main(){   
    //ios::sync_with_stdio(0);
	//cin.tie(0);
    int T;
    cin>>T;
    rep(t,1,T){
        solve();
        cout<<"\n";
    }
    return 0;
}