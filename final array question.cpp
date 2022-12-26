class Solution {
  public:
    vector<long long> finalArray(int n, vector<int> &B) {
        // code here
        long long int C[n]={0};
        long long int num=0;
        vector<long long int>v;
        for(int i=0;i<n;i++)
        {
            num+= B[i]-1;
            long long int index=i;
            while(num>0 && index<n)
            {
                C[index+1]+=num;
                num--;
                index++;
            }
        }
        
        for(int i=0;i<n;i++)
        {   long long int m;
            m= B[i]+C[i];
            v.push_back(m);
        }
     return v;
     
    }
};
