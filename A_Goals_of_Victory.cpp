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
        int f,total=0;
        cin >> f;
        int c[f];
        for(int i=0;i<f-1;i++)
        {
            cin >> c[i];
            total+=c[i];
        }
        cout<<(-1)*total<<endl;
    }
    return 0;
}