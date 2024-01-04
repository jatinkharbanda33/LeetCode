class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt=0;
        unordered_map<int,int> jk;
        for(int i=0;i<nums.size();i++){
            jk[nums[i]]++;
        }
        for(auto it:jk){
            if(it.second==1) return -1;
            if(it.second%3!=0)cnt++;
            cnt+=(it.second/3);
        }
        return cnt;
        
    }
};