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
    ll n,k,ans=0;
    cin>>n>>k;
    string s;
    cin>>s;
    vector <ll> cnt;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='0'){
            ll m = 0;
            while( s[i]=='0' && i<s.size()){
                m++;
                i++;
            }
            cnt.pb(m);    
        }
    }
    if(cnt.size()==0){
        cout<<"0";
        return;
    }
    ll beg = 0,end=0;
    if(s[0]=='0'){
        beg = cnt[0];
        cnt.erase(cnt.begin()); 
    }
    if(s[s.size()-1]=='0' && cnt.size()>0){
        end = cnt[cnt.size()-1];
        cnt.pop_back();
    }

    if(cnt.size()>0){
        sort(cnt.begin(),cnt.end());
        reverse(cnt.begin(),cnt.end());
    }
    while(k>0){
        if(cnt.size()>0 && (cnt[0]>beg) && (cnt[0]>end) && (k>=2)){
                k-=2;
                cnt.erase(cnt.begin());
        }
        else if((beg>end) && (beg>0)){
            beg=0;
            k--;
        }
        else if((end>=beg) && (end>0) ){
            end=0;
            k--;
        }
        else{
            break;
        }
    }
    if(cnt.size()>0){
        rep(i,0,cnt.size()-1){
            ans+=cnt[i];
        }
    }
    ans += beg+end;
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