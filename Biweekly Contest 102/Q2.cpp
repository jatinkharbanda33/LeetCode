class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long > res(n,0);
        int maxx=nums[0];
        res[0]=maxx+maxx;
        for(int i=1;i<n;i++){
            if(nums[i]>maxx){
                maxx=nums[i];
            }
            res[i]=res[i-1]+nums[i]+maxx;
        }
        return res;
        
    }
};