#include <bits/stdc++.h>
using namespace std;
#define M 1000000009
#define ll long long int
#define fi first    
#define se second
ll N = 1e5;
void solve(){
    ll n,x,y;
    cin>>n;
    vector <ll> v(N+1,500);
    v[N]=0;
    for(ll i=0;i<n;i++){
        cin>>x>>y;
        v[x] = min(v[x],y);     
    }
    stack <ll> s;
    ll maxy=-1;
    for(ll i=1; i<=N; i++){
        while(!s.empty() && v[s.top()]>v[i]){
            int h = v[s.top()];
            s.pop();
            int x=0;
            if(!s.empty())  x = s.top();
            maxy = max(maxy, (ll)(h*(i-x)));
        }
        s.push(i);
    }
    cout<<maxy;

}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
}