#include <bits/stdc++.h>
using namespace std;
#define M 1000000009
#define ll long long int
#define fi first    
#define se second
ll fact[10001],inv[10001];
ll  power(ll  i,ll  j)
{
    if(j==0)
    return 1 ;
    ll t=power(i,j/2)%maa ;
    if(j%2==0)
    return (t%M*t%M)%M ;
    else
    return ((t%M*t%maa)%maa*(i%maa)%maa)%maa ;
}
ll C(ll n,ll r){
    ll a;
    a = fact[n];
    a = (a%M)*(inv[n-r]%M);
    a = (a%M)*(inv[r]%M);
    return a;
}
void solve(){

    fact[0] = 1;
    for(int i=1;i<10001;i++){
        fact[i] = ((fact[i-1]%M) * (i%M))%M;
    }
    for(int i=1;i<=10001;i++){
        inv[i] = i;
        for(int j=2;j<=M-2;j++){
            inv[i] = ((inv[i]%M)*(i%M)%M);
        }
    }
    ll n,an=0,bn=0,ans=0;
    cin>>n;
    string a,b;
    cin>>a>>b;
    for(ll i=0;i<n;i++){
        if(a[i]=='1')
            an++;
        if(b[i]=='1')
            bn++;
    }
    ll l = abs(an-bn);
    ll k = ((an+bn)>n)?(2*n-(an+bn)):(an+bn);
    while(l<=k){
        ans = ans%M;
        ans += ( C(n,l)%M );
        l += 2;
    }
    cout<<ans;
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