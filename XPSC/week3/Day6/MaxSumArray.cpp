class Solution
{
public:
    int maximumSumSubarray(vector<int>&arr,int k)
    {
        int l=0,r=0;
        int n=arr.size();
        long long int ans=0,sum=0;
        while(r<n)
        {
            sum+=arr[k];
            if(r-l+1==k)
            {
                ans=max(ans,sum);
                sum-=arr[l];
                l++;
            }
            r++;
        }
        return ans;
    }
};
