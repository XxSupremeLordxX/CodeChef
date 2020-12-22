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
    ll n,m;
    cin>>n>>m;
    ll dp[n+1],k=(m-1)%M,z=m%M;
    dp[0]=0; dp[1]=z; dp[2]=(z*z)%M;

    rep(i,3,n)
    {
        dp[i]=(dp[i-1]*k)%M;
        dp[i]+=(dp[i-2]*k)%M; 
        dp[i]%=M;
    }

    cout<<dp[n]<<"\n";
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