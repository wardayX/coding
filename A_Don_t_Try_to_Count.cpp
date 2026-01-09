#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m,safe=-1;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        for (int i = 0; i < 6; ++i)
        {
            if (x.find(s) != string::npos)
            {
                safe = i;
                break;
            }
            x += x;
        }
        cout << safe << endl;
    }
    return 0;
}
