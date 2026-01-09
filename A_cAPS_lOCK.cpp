#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back


int main()
{
    string s;
    cin>>s;
    if(s[0]>='a' && s[0]<='z')
    {
        int flag=1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                flag++;
                break;
            }
        }
        if(flag==1)
        {
            s[0]=s[0]-32;
            for(int i=1;i<s.size();i++)
            {
                s[i]=s[i]+32;
            }
        }
    }
    else{
        int flag=1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                flag++;
                break;
            }
        }
        if(flag==1)
        {
            for(int i=0;i<s.size();i++)
            {
                s[i]=s[i]+32;
            }
        }
    }
    cout<<s;
    return 0;
}