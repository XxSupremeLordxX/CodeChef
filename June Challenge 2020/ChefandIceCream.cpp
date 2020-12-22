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
    ll n,inp,c5=0,c10=0,c15=0,flag=0;
    cin>>n;
    rep(i,0,n-1){
        cin>>inp;
        if(inp==5){
            c5++;
            continue;
        }
        if(inp==10){
            if(c5>=1){
                c5--;
                c10++;
                continue;
            }
            else{
                flag++;
            }
        }
        if(inp==15){
            if(c10>=1){
                c10--;
                c15++;
                continue;
            }
            else if(c5>=2){
                c5 = c5 - 2;
                c15++;
                continue;
            }
            else{
                flag++;
            }
        }
    }
    if(flag==0)
        cout<<"YES";
    else
        cout<<"NO";

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