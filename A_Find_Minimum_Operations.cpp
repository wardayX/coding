#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   
    int t;
    cin >> t;
    while (t--) {
        ll int n, k, count = 0, ans =0;
        cin >> n >> k;
        if(k == 1 || n < k ){
            cout << n << endl;
        }
    
        else{
        while (n > 0) {
            ans += n % k;
            count = n % k;
            n = (n-count)/k;
        }
        cout << ans << endl;
        }
    }
    return 0;
}
