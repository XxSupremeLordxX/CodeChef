#include <iostream>
#include <string>
#include <algorithm>

constexpr int N = 1e5, MOD = 1e9 + 7;
int fact[N + 1], ifact[N + 1];

int binExp(int a, int n) {
    int res = 1;
    a %= MOD;
    while(n) {
        if(n & 1) res = 1ll * res * a % MOD;
        a = 1ll * a * a % MOD;
        n >>= 1;
    }
    return res;
}

void preCalc() {
    fact[0] = 1;
    for(int i = 1; i <= N; i++)
        fact[i] = 1ll * fact[i - 1] * i % MOD;
    ifact[N] = binExp(fact[N], MOD - 2);
    for(int i = N - 1; i >= 0; i--)
        ifact[i] = 1ll * ifact[i + 1] * (i + 1) % MOD;
}

int comb(int n, int r) {
    return 1ll * fact[n] * ifact[r] % MOD * ifact[n - r] % MOD;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    preCalc();
    int na, nb, t, n, ans;
    std::string a, b;
    std::cin >> t;

    while(t--) {
        std::cin >> n >> a >> b;
        na = nb = ans = 0;
        na = std::count(a.begin(), a.end(), '1');
        nb = std::count(b.begin(), b.end(), '1');
        int u = na + nb - 2 * std::max(0, na + nb - n);
        for(int i = abs(na - nb); i <= u; i += 2)
            ans = (ans + comb(n, i)) % MOD;
        std::cout << ans << '\n';
    }
}