#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if( a.size()!=0 && a.back() > x){
            a.ep(x);
            }
            a.ep(x);
        }
        cout << a.size() << endl;
        for(auto x : a)
            cout << x << " ";

        cout << endl;

    }
    return 0;
}