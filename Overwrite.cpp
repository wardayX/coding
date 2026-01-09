#include <iostream>
#include <vector>
#include <climits>
#include <set>
#include <algorithm>
using namespace std;
typedef long long ll;

template<typename T>
vector<int> compute_z(const vector<T>& s) {
    int n = s.size();
    vector<int> z(n, 0);
    z[0] = n;
    int l = 0, r = 0;
    for (int i = 1; i < n; i++){
        if (i <= r)
            z[i] = min(r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            z[i]++;
        if (i + z[i] - 1 > r) {
            l = i;
            r = i + z[i] - 1;
        }
    }
    return z;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<ll> A(n), B(m);
    
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < m; i++)
        cin >> B[i];

    ll min_val = B[0];
    int min_idx = 0;
    for (int i = 1; i < m; i++){
        if (B[i] < min_val) {
            min_val = B[i];
            min_idx = i;
        }
    }

    vector<ll> c(m);
    for (int i = 0; i < m; i++){
        c[i] = B[(min_idx + i) % m];
    }
    
    vector<ll> s;
    s.reserve(m + 1 + n);
    for (auto x : c)
        s.push_back(x);
    s.push_back(LLONG_MIN);
    for (auto x : A)
        s.push_back(x);
    
    vector<int> z = compute_z(s);
  
    vector<int> candy;
    for (int i = 0; i <= n - m; i++){
        int pos_in_s = m + 1 + i; 
        int lcp = min(z[pos_in_s], m);
        if (lcp == m)
            continue; 
        if (A[i + lcp] > c[lcp])
            candy.push_back(i);
    }
    

    set<int> nRp;
    for (int i = 0; i < n; i++)
        nRp.insert(i);
    
    sort(candy.rbegin(), candy.rend());
    for (int start : candy) {
        int L = start, R = start + m - 1;
        auto it = nRp.lower_bound(L);
        while (it != nRp.end() && *it <= R) {
            int pos = *it;

            A[pos] = c[pos - start];
            it = nRp.erase(it);
        }
    }
    
    for (auto x : A)
        cout << x << " ";
    cout << "\n";
}
 
//--------------------------------------------------------------
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}
