#include <bits/stdc++.h>
using namespace std;
#define M 1000000009
#define ll long long int
#define fi first    
#define se second

void solve(){
    string str;
    cin>>str;
    stack <char> s;
    ll ans=0;
    for(ll i=0;i<str.length();i++){
        if(str[i]=='>'&&s.empty()) break;
        if(str[i]=='<'){s.push(str[i]); continue;}
        if(str[i]=='>'&&s.top()=='<'){
            s.pop();
            if(s.empty()) ans=i+1; 
            continue;
        }
    }
    cout<<ans;
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