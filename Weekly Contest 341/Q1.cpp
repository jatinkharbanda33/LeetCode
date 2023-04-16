class Solution {
public:
    int cnt(vector<int> pk){
        int ans=0;
        for(int i=0;i<pk.size();i++){
            if(pk[i]==1) ans++;
        }
        return ans;
    }
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int res=-1;
        int ans=-1;
        int maxx=INT_MIN;
        for(int i=0;i<mat.size();i++){
            int x=cnt(mat[i]);
            if(x>maxx){
                res=i;
                ans=x;
                maxx=x;
            }
            
        }
        vector<int> pk;
        if(res!=-1 && ans!=-1){
            pk.push_back(res);
            pk.push_back(ans);
            
        }
        return pk;
        
    }
};