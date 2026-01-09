#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair
#define pb push_back

void reverseString(string& str, int start, int end)
{
    if (start >= end)
        return;
    swap(str[start], str[end]);
    reverseString(str, start + 1, end - 1);
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll int t;
    cin >> t;
    while (t--)
    {
        ll int n;
        cin >> n;
        string a;
        cin>>a;
        if(n==1){
            if(a[0]=='1') {
                cout<<2<<endl;
            }
            else {
                cout<<1<<endl;
            }
        }
        else if(a[n-1]=='1' || a[0]=='1') {
            cout<<n*2<<endl;
        }
        else{
            int max1=0,max2=0;
            for(int i=0;i<n;i++){
                if(a[i]=='1'){
                    max1=i;
                    break;
                }
                else{
                    max1=0;
                }
            }
            reverseString(a,0,n-1);
            for(int i=0;i<n;i++){
                if(a[i]=='1'){
                    max2=i;
                    break;
                }
                else{
                    max2=0;
                }
            }
            if(max1==0 && a[0]=='0'){
                cout<<n<<endl;
            }
            else if((n-max1)>(n-max2)){
                cout<<(n-max1)*2<<endl;
            }
            else{
                cout<<(n-max2)*2<<endl;
            }
        }
    }
        return 0;
}