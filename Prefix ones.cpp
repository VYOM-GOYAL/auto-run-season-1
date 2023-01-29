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
        /* Agar string 0 se start ho rahe ho to bas maximum number of consecutive 1 nikaal lo. 
           And agar string 1 se start ho rahe ho to pehla ( 1 + maximum number of 1's starting from 2nd element of string ) se answer nikaal lo.  */
        
        ll n;
        cin>>n;
        
        string s;
        cin>>s;
        
        vector<int>v;
        int count=0;
        
    if(s[0]=='0')
    {
            for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                count++;
            }
            if(s[i]!='1')
            {
                v.push_back(count);
                count=0;
            }
        }
        cout<<*max_element(v.begin(), v.end())<<"\n";
    }
    else if(s[0]=='1')
    {
        for(int i=1;i<n;i++)
        {
            if(s[i]=='1')
            {
                count++;
            }
            if(s[i]!='1')
            {
                v.push_back(count);
                count=0;
            }
        }
        cout<<1+(*max_element(v.begin(), v.end()))<<"\n";
    }
       
    }
    return 0;
}
