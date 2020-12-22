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
    ll n;
    cin>>n;
    ll a = n*(n+1);
    ll s = a/2;
    vector <ll> coll;
    ll chk=0,ans=0;
    rep(i,1,n){
        chk += i;
        if(chk==s-chk){
            ans += ((i-1)*i)/2 + ((n-i)*(n-i-1))/2;  
            break;
        }
    }
    rep(i,1,n){
        ll b = i*(i+1)*2;
        //cout<<(float)(a-b)/4.0<<" ";
        if((a-b)%4==0 && (a-b)/4>=1 && (a-b)/4<=(n-1) ){
            coll.pb((a-b)/4);
            //cout<<(a-b)/4<<" ";
        }
    }
    if(coll.size()==0){
        cout<<ans;
        return;
    }
    rep(i,0,coll.size()-1){
        ans += (n-coll[i]);
    }
    cout<<ans;
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