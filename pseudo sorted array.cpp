#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    p:
    while(t--)
    {
        int a;
        cin>>a;
        int arr[a], arr2[a];
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
            arr2[i]=arr[i];
        }
        sort(arr2, arr2+a);
        for(int i=0;i<a;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                goto m;
            }
        }
        
        m:
        for(int i=0;i<a;i++)
        {
            if(arr[i]==arr2[i])
            {
                continue;
            }
            else
            {
                cout<<"NO\n";
                goto p;
            }
        }
        cout<<"YES\n";
        
    }
    return 0;
}
