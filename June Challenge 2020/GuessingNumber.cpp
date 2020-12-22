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
    ll n;
    char ch;
    cin>>n;
    cout<<n<<"\n";
    cin>>ch;
    if(ch=='E'){
        return;
    }
    if(ch=='L'){
        cout<<n<<"\n";
        cin>>ch;
    }


    ll lo = 1,hi=n;
    ll mid = lo + (hi-lo)/2;
    cout<<mid<<"\n";
    cin>>ch;
    while(ch!='E'){
        if(ch=='G'){
            lo = mid+1;   
        }
        if(ch=='L'){
            hi = mid-1;
        }
        mid= lo + (hi-lo)/2;
        cout<<mid<<"\n";
        cin>>ch;
        if(ch=='E'){
            return;
        }
        cout<<mid<<"\n";
        cin>>ch;
    }

}

int main(){   
    //ios::sync_with_stdio(0);
	//cin.tie(0);
    solve();
    return 0;
}