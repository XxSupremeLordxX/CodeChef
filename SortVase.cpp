#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi first    
#define se second

void solve(){

    ll n,m,a[20],x[20],y[20],cnt=0;;
    cin>>n>>m;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<m;i++){
        cin>>x[i]>>y[i];
    }
    for(ll i=0;i<n-1;i++){
        ll small=a[i];ll pos=i;ll flg=0;
        for(ll j=i+1;j<n;j++){
            if(a[j]<small){
                small=a[j];
                pos=j;
                flg++;
            }
        }
        if(flg>0){
            swap(a[i],a[pos]);
            cnt++;
            for(ll k=0;k<m;k++){
                if(((x[k]==i+1)&&(y[k]==pos+1))||((y[k]==i+1)&&(x[k]==pos+1))){
                    cnt--;
                    break;
                }
            }    
        }
    }
    cout<<cnt;

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