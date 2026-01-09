#include <bits/stdc++.h>
using namespace std;

int count_satisfying_x(vector<int>& A) {
    int min_val = INT_MAX;
    for (int a : A)
        min_val = min(min_val, a | ~a);
    return min_val;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << count_satisfying_x(a) << "\n";
    }
    return 0;
}