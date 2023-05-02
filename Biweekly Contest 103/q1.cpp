class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int mx=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>mx){
                mx=nums[i];
            }
        }
        int p=mx+k-1;
        int q=mx-1;
        
        int a=q*(q+1)/2;
        int b=p*(p+1)/2;
        return b-a;
    }
};