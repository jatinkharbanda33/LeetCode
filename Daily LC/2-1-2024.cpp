class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> jk;
        vector<vector<int>> res;
        for(int i=0;i<nums.size();i++){
            jk[nums[i]]++;
            if(jk[nums[i]]>res.size()){
                res.push_back({nums[i]});
            }
            else{
                res[jk[nums[i]]-1].push_back(nums[i]);
            }
        }
       
        return res;
    }
};