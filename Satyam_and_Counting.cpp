#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back

bool checkRightAngled(int A, int B, int C) {
    return (A > 0 && B > 0 && C > 0) && (A == B + C || B == A + C || C == A + B);
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n, count = 0;
        cin >> n;
        vector<pair<int, int>> points(n);
        for (int i = 0; i < n; ++i) {
            cin >> points[i].first >> points[i].second;
        }

        vector<vector<int>> dist(n, vector<int>(n, 0));
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int dx = points[j].first - points[i].first;
                int dy = points[j].second - points[i].second;
                dist[i][j] = dist[j][i] = dx * dx + dy * dy;
            }
        }

        for (int i = 0; i < n; ++i) {
            unordered_map<int, int> distCount;
            for (int j = 0; j < n; ++j) {
                if (i != j) {
                    distCount[dist[i][j]]++;
                }
            }
            for (const auto& [dist, freq] : distCount) {
                if (freq > 1) {
                    count += freq * (freq - 1) / 2;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
