#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int T;
    cin >> T;
    
    while (T--) {
        int n, m;
        cin >> n >> m;
        int v = INT_MIN;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v = max(v, x);
        }
        for (int i = 0; i < m; i++) {
            char c;
            int l, r;
            cin >> c >> l >> r;
            if (l <= v && v <= r) {
                if (c == '+') {
                    v++;
                } else {
                    v--;
                }
            }
            cout << v;
            if (i != m - 1) {
                cout << " ";
            } else {
                cout << "\n";
            }
        }
    }
    
    return 0;
}