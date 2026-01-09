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
    for(int i = 0; i < t+1; i++)
    {
        for(int j = 0; j < t-i; j++)
            cout << "  ";
        for(int j = 0; j <= i; j++)
        {
            cout << j;
            if(j != i)
                cout << " ";
        }
        for(int j = i-1; j >= 0; j--)
        {
            cout << " " << j;
        }
        cout << endl;
    }
    for(int i = t-1; i >= 0; i--)
    {
        for(int j = 0; j < t-i; j++)
            cout << "  ";
        for(int j = 0; j <= i; j++)
        {
            cout << j;
            if(j != i)
                cout << " ";
        }
        for(int j = i-1; j >= 0; j--)
        {
            cout << " " << j;
        }
        cout << endl;
    }
    return 0;
}