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





//another method of solving this question(which is corect)

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
        int n, k;
        cin>>n;
        int A[n];
        map<int, int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            mp[A[i]]++;
        }
        cin>>k;
        int B[k];
        for(int i=0;i<k;i++)
        {
            cin>>B[i];
            mp[B[i]]=0;
        }
        
        for(int i=0;i<n;i++)
        {
            if(mp[A[i]]>0)
            {
                cout<<A[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
