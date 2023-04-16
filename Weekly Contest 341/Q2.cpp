class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int ans=-1;
        int maxx=INT_MIN;
        for(int i=0;i<divisors.size();i++){
            int x=divisors[i];
            int cnt=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]%x==0) cnt++;
                
            }
            if(cnt>maxx){
                ans=x;
                maxx=cnt;
                
            }
            else if(cnt==maxx && x<ans){
                ans=x;
            }
            
        }
        return ans;
        
    }
};