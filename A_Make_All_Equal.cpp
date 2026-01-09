#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ep emplace_back
#define mp make_pair   
#define pb push_back 


int findMode(int arr[], int n) 
{ 
    unordered_map<int, int> freqMap; 
    for (int i = 0; i < n; i++) { 
        freqMap[arr[i]]++; 
    } 
    auto maxElement 
        = max_element(freqMap.begin(), freqMap.end(), 
                      [](const auto& a, const auto& b) { 
                          return a.second < b.second; 
                      }); 
    return maxElement->first; 
} 


int main()
{
    int t;
    cin >> t;
    int p=t;
    while(t--)
    {
       int n;
       cin >> n;
       int y[n];
       int count=0;
       for(int i=0;i<n;i++)
       {    
              cin >> y[i];
       }

       int mode=findMode(y,n);

       for(int i=0;i<n;i++)
       {
           if(y[i]!=mode)
           {
               count++;
           }
       }
       cout << count << endl;
    }
    return 0;
}