#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair    
#define pb push_back    

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    vector<int> v; 
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]!='+'){
            v.ep(s[i]-'0');
        }
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout << v[i];
        if(i!=v.size()-1){
            cout << "+";
        }
    }
    return 0;
}