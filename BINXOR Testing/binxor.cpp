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
#define end_routine() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

ll fac[(ll)1e5+3];
void fac_init(){
    fac[0]=1;
    fac[1]=1;
    for(ll i=2;i<=1e5+2;i++){
        fac[i] = (i%M*fac[i-1]%M)%M;
    }
}
ll inv(ll a,ll p){
    ll res = 1;
    while(p>0){   
        if((p&1)==1){
            res = (res%M*a%M)%M;
        }
        p = p/2;
        a = (a%M*a%M)%M;
    }
    return res%M;
}

ll C(ll n,ll i){
    ll ret = fac[n]%M;
    ret = ((ret%M)*inv(fac[i],M-2))%M;
    ret = ((ret%M)*inv(fac[n-i],M-2))%M;
    return(ret);
}

void solve(){
    ll n;
    string a,b;
    cin>>n>>a>>b;
    
    ll a1 = count(a.begin(),a.end(),'1');
    ll b1 = count(b.begin(),b.end(),'1');
    ll x[] = {a1,b1};
    sort(x,x+2);
    //cout<<x[0]<<" "<<x[1];
    ll mx = (n>=(x[0]+x[1]))?(x[0]+x[1]):(2*n-(x[0]+x[1]));
    ll ans=0;
    for(ll i = x[1]-x[0];i<=mx;i+=2){
        ans = ans%M + C(n,i)%M;
    }
    cout<<ans%M;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    fac_init();
    rep(t,1,T){
    //    cout<<"Case #"<<t<<": ";
        solve();
        cout<<"\n";
    }
    //end_routine();
    return 0;
}