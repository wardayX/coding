#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        ll int k;
        cin >> k;
        cout << k + int(floor(sqrtl(k)+0.5)) << endl;
    }
    return 0;
}