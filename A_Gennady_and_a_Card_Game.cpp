#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair   
#define pb push_back    

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string n;
    cin >> n;
    vector<string> v(5);
    for(int i = 0; i < 5; i++)
    {
        cin >> v[i];
        if(v[i][0] == n[0] || v[i][1] == n[1])
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}