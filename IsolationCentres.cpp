#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi first    
#define se second

void solve(){
    ll n,q,c[100001];
    string str,s;
    cin>>n>>q;
    cin>>str;
    for(ll i=0;i<q;i++){
        cin>>c[i];
    }
    sort(str.begin(),str.end());
    char ch;
    for(int j=0;j<q;j++){
        s=str;ll cnt=0;ch=s[0];ll flag=1;
        for(ll i=1;i<s.length();i++){
            if(ch==s[i]){
                flag++;
                continue;
            }
            if(flag>c[j]){
                cnt+=(flag-c[j]);
            }
            if(ch!=s[i]){
                flag=1;
                ch=s[i];
            } 

        }
        if(flag>c[j])
            cnt+=(flag-c[j]);
        cout<<cnt<<"\n";       
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}