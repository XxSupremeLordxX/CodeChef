/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll long long int
#define fi first    
#define se second
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

void solve(){
    ll n;
    cin>>n;
    ll a[65][65],b[65];
    rep(i,0,n-1){
        rep(j,0,n-1){
            cin>>a[i][j];
            if(i==0)
                b[j] = a[i][j];
        }
    }
    ll ans=0;
    ll e = 1;
    while(b[e]!=e+1&&e<n){
        e++;
    }
    if(e==n){
        cout<<"1";
        return;
    }
    ll k = 0;
    if(e>1){
        k = e+1;
        ans++;
    }


    for(ll i=k;i<n;i++){
        if(b[i]!=i+1){
            ans+=2;
            //cout<<i+1<<" ";
            while(b[i]!=i+1&&i<n)
                i++;
        }
    }
    cout<<ans;

}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    rep(t,1,T){
    //    cout<<"Case #"<<t<<": ";
        solve();
        cout<<"\n";
    }
    //timetaken();
    return 0;
}