#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, n, count = 0;
        cin >> a >> b >> n;
         if (a > b)
            {
                while(a<=n)
                {
                    b += a;
                    count++;
                    if(b>n)
                    {
                        break;
                    }
                    a += b;
                    count++;
                }
            }
            else
            {
               while(b<=n)
                {
                    a += b;
                    count++;
                    if(a>n)
                    {
                        break;
                    }
                    b += a;
                    count++;
                }
            }
        
        cout << count << endl;
    }
    return 0;
}