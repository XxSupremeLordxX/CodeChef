#include <bits/stdc++.h>
using namespace std;
#define M 1000000009
#define ll long long int
#define fi first    
#define se second

void solve(){
    ll n,an=0,bn=0,acnt,bcnt;
    string p;
    cin>>n;
    cin>>p;
    acnt=n;bcnt=n;
    for(int i=0;i<2*n;i+=2){
        if(p[i]=='1'){
            an++;
        }
        acnt--;
        if(an-bn>bcnt){
            cout<<i+1;
            return;
        }
        if(bn-an>acnt){
            cout<<i+1;
            return;
        }
        if(p[i+1]=='1'){
            bn++;
        }
        bcnt--;
        if(bn-an>acnt){
            cout<<i+2;
            return;
        }
        if(an-bn>bcnt){
            cout<<i+2;
            return;
        }
    }
    cout<<2*n;
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