#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 998244353;

vector<int> mobius;
vector<int> primes;
vector<bool> is_prime;

void sieve(int maxn) {
    is_prime.assign(maxn + 1, true);
    mobius.assign(maxn + 1, 1);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= maxn; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i; j <= maxn; j += i) {
                mobius[j] *= -1;
            }
            for (ll j = (ll)i * i; j <= maxn; j += i * i) {
                mobius[j] = 0;
            }
        }
        for (int p : primes) {
            if (i * p > maxn) break;
            is_prime[i * p] = false;
            if (i % p == 0) break;
        }
    }
}

ll mod_pow(ll a, ll b) {
    ll res = 1;
    a %= MOD;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

ll inv(ll x) {
    return mod_pow(x, MOD - 2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<pair<int, int>> test_cases(t);
    int max_k = 0;
    
    for (int i = 0; i < t; i++) {
    cin >> test_cases[i].first >> test_cases[i].second;
    max_k = max(max_k, test_cases[i].first);
    }

    sieve(max_k);

    for (auto& gg : test_cases) {
        int k = gg.first;
        int n = gg.second;
        vector<ll> f(k + 1);
        for (int x = 1; x <= k; ++x) {
            vector<int> divisors;
            for (int d = 1; d * d <= x; ++d) {
                if (x % d == 0) {
                    if (d <= k) divisors.push_back(d);
                    if (d != x / d && x / d <= k) divisors.push_back(x / d);
                }
            }
            int cnt = 0;
            for (int d : divisors) {
                cnt += (mobius[d] != 0);
            }
            if (cnt == 0) {
                f[x] = 0;
                continue;
            }

            ll sum = 0;
            for (int d : divisors) {
                if (x / d > k) continue;
                if (mobius[d] == 1) {
                    sum = (sum + 1) % MOD;
                } else if (mobius[d] == -1) {
                    sum = (sum - 1 + MOD) % MOD;
                }
            }

            if (sum == 0) {
                f[x] = 0;
                continue;
            }

            ll c = sum;
            if (c == 1) {
                f[x] = n % MOD;
            } else {
                ll pow_cn = mod_pow(c, n);
                f[x] = (pow_cn - 1 + MOD) * inv(c - 1) % MOD;
            }
        }

        vector<ll> ans(k + 1);
        for (int x = 1; x <= k; ++x) {
            for (int multiple = x; multiple <= k; multiple += x) {
                ans[multiple] = (ans[multiple] + mobius[x] * f[multiple / x]) % MOD;
            }
        }

        for (int x = 1; x <= k; ++x) {
            ans[x] = (ans[x] % MOD + MOD) % MOD;
        }

        for (int x = 1; x <= k; ++x) {
            cout << ans[x] << " ";
        }
        cout << "\n";
    }

    return 0;
}