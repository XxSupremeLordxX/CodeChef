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
    ll js,js2,cnt=2;
    cin>>js;
    js2 = js;
    while(js%2==0){
        js = js/2;
        cnt = cnt*2;
    } 
    if(js==1){
        cout<<"0";
        return;
    }
    ll ans = js2/cnt;
    if(js2%cnt==0){
        ans--;
    }
    cout<<ans;
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