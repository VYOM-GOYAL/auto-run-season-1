#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(arr[i+1]>arr[i])
            {
                v.push_back(arr[i+1]-arr[i]);
            }
        }
        ll m= *max_element(v.begin(), v.end());
        if(m>0)
        {
            cout<<m<<"\n";
        }
        else
        {
            cout<<"UNFIT\n";
        }
        v.clear();
    }
    return 0;
}
