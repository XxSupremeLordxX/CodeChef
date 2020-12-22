#include <bits/stdc++.h>
using namespace std;
#define M 1000000009
#define ll long long int
#define fi first    
#define se second

void solve(){
    ll n;
    cin>>n;
    ll d0,d1;
    cin>>d0>>d1;
    ll d = (d0+d1)%10;
    ll s = d0+d1+d;
    if(d==5 || s%10 == 0){
        cout<<"NO";
        return;
    }
    ll a[4] = {(2*d)%10,(4*d)%10,(8*d)%10,(16*d)%10};
    ll len = n - 3;
    ll c = len/4;
    s += (c%3)*20;
    for(int i=0;i<len%4;i++){
        s+=a[i];
    }
    if(s%3==0)
        cout<<"YES";
    else
        cout<<"NO";
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