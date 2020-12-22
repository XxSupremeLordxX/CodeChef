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

ll check(vector <ll> a){
    ll sum = (a.size()*(a.size()+1))/2;
    ll checker = 0; 
    for(int i=0;i<a.size()-1;i++){
        checker += a[i];
        if(checker==(sum-checker)){
            cout<<checker<<" "<<sum<<" ";
            return 1;
        }
    }
    return 0;
}

void solve(){
    ll n;
    cin>>n;
    ll ans=0;
    vector <ll> a;
    rep(i,1,n){
        a.pb(i);
    }
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            swap(a[i],a[j]);
            ans += check(a);
            if(check(a)==1)
                //cout<<i+1<<" "<<j+1<<"\n";
            swap(a[i],a[j]);
        }
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