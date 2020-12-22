#include <bits/stdc++.h>
using namespace std;
#define M 1000000009
#define ll long long int
#define fi first    
#define se second

void solve(){
    ll n,x,y,ans=INT_MAX;
    ll inp1,inp2;
    vector <ll> v,w;
    vector <pair<ll,ll>> c;
    cin>>n>>x>>y;
    for(ll i=0;i<n;i++){
        cin>>inp1>>inp2;
        c.push_back(make_pair(inp1,inp2));
    }
    for(ll i=0;i<x;i++){
        cin>>inp1;
        v.push_back(inp1);
    }
    for(ll i=0;i<y;i++){
        cin>>inp1;
        w.push_back(inp1);
    }
    sort(v.begin(),v.end());
    sort(w.begin(),w.end());
    for(ll i=0;i<n;i++){
       auto lo = upper_bound(v.begin(),v.end(),c[i].fi)-v.begin()-1;
       auto hi = lower_bound(w.begin(),w.end(),c[i].se)-w.begin();
       //cout<<"\n"<<v[lo]<<" "<<w[hi];
       if (lo >= 0 and hi < y)
            ans = min(ans, w[hi] - v[lo] + 1);
    }
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
}