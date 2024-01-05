class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
    //    vector<int> dp(nums.size(),1);
    //    int ans=1;
    //    for(int j=1;j<nums.size();j++){
    //        for(int k=0;k<j;k++){
    //            if(nums[k]<nums[j]){
    //                dp[j]=max(dp[j],1+dp[k]);
    //                ans=max(ans,dp[j]);
    //            }
    //        }
    //    }
    //    return ans;
    vector<int> res;
    for(int j=0;j<nums.size();j++){
        auto it=lower_bound(res.begin(),res.end(),nums[j]);
        int ind=it-res.begin();
        if(ind==res.size()) res.push_back(nums[j]);
        else{
            res[ind]=nums[j];
        }
    }
    return res.size();
    }
};