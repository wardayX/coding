#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair     
#define pb push_back     

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int count = 0;
    while(n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a + b + c >= 2)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}