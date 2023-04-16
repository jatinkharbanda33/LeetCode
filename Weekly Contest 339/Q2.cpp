class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        int n=nums.size();
        vector<vector<int>> ans;
        int prev=0;
        vector<int> used(n,-1);
        while(true){
            vector<int> res;
            int prev=-1;
            unordered_map<int,int> jk;
            int i=0;
            while(i<n){
                if(used[i]==-1){
                    prev=i;
                    break;
                }
                i++;
            }
            if(prev==-1){
                break;
            }
            for(int j=prev;j<n;j++){
                if(jk.count(nums[j])>0){
                    continue;
                }
                else if(jk.count(nums[j])<=0 && used[j]==-1){
                    pair<int,int> p(nums[j],1);
                    jk.insert(p);
                    res.push_back(nums[j]);
                    used[j]=0;
                }
            }
            ans.push_back(res);
            jk.clear();
            
            
        }
        return ans;
        
        
    }
};