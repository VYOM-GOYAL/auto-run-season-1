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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int a;
        cin>>a;
        vector<int>b(a);
        for(int i=0;i<a;i++)
        {
            cin>>b[i];
        }
        
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(b[i]==v[j])
                {
                    remove(v.begin(), v.end(), v[j]);
                }
            }
        }
        
        for(auto &it:v)
        {
            cout<<it<<" ";
        }
        
        v.clear();
        b.clear();
        cout<<endl;
    }
    return 0;
}
