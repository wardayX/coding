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
    while(true)
    {
        n++;
        int a = n/1000;
        int b = n/100%10;
        int c = n/10%10;
        int d = n%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout << n << endl;
            break;
        }
    }
    return 0;
}