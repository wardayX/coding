#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back


int main()
{
    ll int n;
    cin >> n;
    int count = 0;
    while(n)
    {
        if(n%10 == 4 || n%10 == 7)
            count++;
        n /= 10;
    }
    cout << (count == 4 || count == 7 ? "YES" : "NO") << endl;
    return 0;
}