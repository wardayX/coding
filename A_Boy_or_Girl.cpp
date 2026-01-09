#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back

int main()
{
    int flag = 0;
    string s;
    cin >> s;
    int n = s.length();
    sort(s.begin(), s.end());
    int temp='A';
    for (int i = 0; i < n-1; i++)
    {

        for (int j = i+1; j < n; j++)
        {
            if (s[i] == s[j] && s[i] != temp)
            {
                flag ++;
            }
        }
        temp = s[i];
    }
    if ((n-flag)% 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}