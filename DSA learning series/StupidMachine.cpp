#include <bits/stdc++.h>
using namespace std;
#define M 1000000009
#define ll long long int
#define fi first    
#define se second

void solve(){
    ll n,a[100001];
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll sum=0,min=a[0];
    for(int i=0;i<n;i++){
        if(min>a[i])
            min = a[i];
        sum += min;
    }
    cout<<sum;

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