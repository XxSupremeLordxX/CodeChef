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
    ll cnt=0;
    string s;
    cin>>s;
    if(s.length()<=1){
        cout<<"0";  
        return;
    }
    for(int i=0;i<s.length()-1;i++){
        if(s[i]!=s[i+1]){
            cnt++;
            i++;
        }
    }
    cout<<cnt;
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