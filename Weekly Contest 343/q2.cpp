class Solution {
public:
    
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        unordered_map<int,int> jk;
        for(int i=0;i<arr.size();i++){
            pair<int,int> p(arr[i],i);
            jk.insert(p);
        }
        int m=mat.size();
        int n=mat[0].size();
        int ans=INT_MAX;
        for(int i=0;i<m;i++){
            int mxind=INT_MIN;
            for(int j=0;j<n;j++){
                if(jk[mat[i][j]]>mxind){
                    mxind=jk[mat[i][j]];
                }
                
            }
            ans=min(ans,mxind);
            
        }
        for(int i=0;i<n;i++){
            int mxind=INT_MIN;
            for(int j=0;j<m;j++){
                if(jk[mat[j][i]]>mxind){
                    mxind=jk[mat[j][i]];
                }
                
            }
            ans=min(ans,mxind);
            
        }
        return ans;
        
        
    }
};