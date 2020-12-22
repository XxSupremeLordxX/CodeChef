#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int Case(ll a, ll b, ll c, ll p ,ll q, ll r)
{
    int steps = 0;
    
    ll x = a == 0 ? -1 : p % a;
    ll y = b == 0 ? -1 : q % b;
    ll z = c == 0 ? -1 : r % c;
    
    ll s = a == 0 ? 0 : p / a;
    ll t = b == 0 ? 0 : q / b;
    ll w = c == 0 ? 0 : r / c;
    
    if(x == 0 && y == 0 && z == 0 && s != 1 && t != 1 && w != 1)
    {
        if(s == t && t == w)
        {
            a = a * s;
            b = b * t; 
            c = c * w;
            steps += 1;
        }
    }
    else if(x == 0 && y == 0 && s != 1 && t != 1)
    {
        if(s == t)
        {
            a = a * s;
            b = b * t;
            steps += 1;
        }
    }
    else if(z == 0 && y == 0 && t != 1 && w != 1)
    {
        if(w == t)
        {
            c = c * w;
            b = b * t;
            steps += 1;
        }
    }
    else if(z == 0 && x == 0 && s != 1 && w != 1)
    {
        if(w == s)
        {
            c = c * w;
            a = a * s;
            steps += 1;
        }
    }
    
    ll l = p - a;
    ll m = q - b;
    ll n = r - c;
    
    if(l == 0 && m == 0 && n == 0)
    {
        steps += 0;
    }
    else if((l == m && m == n) || (l == m && n == 0) || (m == n && l == 0) || (l == n && m == 0) || (l == 0 && n == 0) || (m == 0 && l == 0) || (n == 0 && m == 0))
    {
        steps += 1;
    }
    else if(l == m || m == n || l == n || l == 0 || m == 0 || n == 0)
    {
        steps += 2;
    }
    else
    {
        steps += 3;
    }
    
    return steps;
}


int main()
{
    int T;
	cin >> T;
	
	for(int i = 0; i < T; i++)
	{
	    long int a, b, c, p, q, r;
        cin >> a >> b >> c >> p >> q >> r;
	    cout << Case(a, b, c, p, q, r) << endl;
	}
	
	return 0;
}