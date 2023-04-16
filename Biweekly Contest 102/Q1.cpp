class Solution {
public:
    int help(int a){
        string bk=to_string(a);
        return bk.length();
    }
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int n=grid.size();
        int leng=0;
        for(int i=0;i<n;i++){
            if(grid[i].size()>leng){
                leng=grid[i].size();
            }
        }
        vector<int> res(leng,0);
        for(int i=0;i<leng;i++){
            int ans=INT_MIN;
            for(int j=0;j<n;j++){
                if(i<grid[j].size()){
                    ans=max(ans,help(grid[j][i]));
                }
            }
            res[i]=ans;
        }
        return res;
        
    }
};