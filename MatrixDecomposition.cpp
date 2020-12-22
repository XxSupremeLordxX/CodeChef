#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll n,m,i,j,x,y,a,b;
const ll M = ((ll)1e9 + 7);

ll power(ll x, ll y){
    x %= M;
    ll ans = 1;
    while(y){
        if(y & 1)
            ans = (ans * x) % M;
        y >>= 1LL;
        x = (x * x) % M;
    }
    return ans;
}
ll add(ll a, ll b){
    return((a % M + b % M) % M);
}
ll sub(ll a, ll b){
    return((a % M - b % M + M) % M);
}
ll mult(ll a, ll b){
    return(((a % M) * (b % M)) % M);
}
ll divi(ll a, ll b){
    return(mult(a, power(b, M - 2)) % M);
}
void solve(){
	cin>>n>>a;
	ll ans = 0,mul=1,ele = a;
	for(ll i=1;i<=n;i++){
		ll x = power(ele,2*i-1);
		ans = add(ans,x);
		ele = mult(x,ele);
	}
	cout<<ans<<"\n";
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
 return 0;   
}