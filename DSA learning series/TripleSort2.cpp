#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi first    
#define se second

void solve(){
    ll a[20001],n,k,b[20001];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    ll p1,p2,p3;
    ll cnt=0,m=0;     
    string s[40001];
    
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            p2=find(a,a+n,b[i])-a;
            p1=i;int j=0;
            p3=find(b,b+n,a[i])-b;
            if(p2==p3){
                for(j=i+1;j<n;j++){
                    if(a[j]!=b[j]&&j!=p2){
                        p3=j;
                        break;
                    }
                }
            }
            if(j==n){
                cout<<"-1";
                return;
            }
            
            if(p2<p3){
                cnt+=2;
                s[m]=to_string(p1+1)+" "+to_string(p2+1)+" "+to_string(p3+1); m++;//cout<<s[m-1]<<"\n";
                s[m]=to_string(p1+1)+" "+to_string(p2+1)+" "+to_string(p3+1); m++;//cout<<s[m-1]<<"\n";
                swap(a[p1],a[p2]);
                swap(a[p2],a[p3]);
            } 
            else if(p2>p3){
                cnt++;
                s[m]=to_string(p1+1)+" "+to_string(p3+1)+" "+to_string(p2+1); m++;//cout<<s[m-1]<<"\n";
                swap(a[p1],a[p2]);
                swap(a[p2],a[p3]);
            } 
        }
    }
    if(cnt>k){
        cout<<"-1";
        return;
    }
    cout<<cnt<<"\n";
    for(int i=0;i<m;i++){
        cout<<s[i]<<"\n";
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    ll T;
    cin>>T;
    for(int t=1;t<=T;t++){
        solve();
        cout<<"\n";
    }
    return 0;
}