#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 1000000007

void solve(){

    ll n,a[101],ans=1,inp=0;
    string word,str;
    
    cin>>n;
    for(int i=1;i<=100;i++){
        a[i]=0;
    }
    for(int i=0;i<=n;i++){
      getline(cin,str);
      //cout<<str<<"\n";
      stringstream s(str);
      while(s >> word){
          inp=stoi(word);
          //cout<<inp<<"\t";
          a[inp]++;
      }
    }
    for(int i=1;i<=100;i++){
        if(a[i]!=0){
            ans=((ans%M)*(a[i]%M))%M;
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