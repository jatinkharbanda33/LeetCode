class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
        int curr=0;
        for(int i=bank.size()-1;i>=0;i--){
            int cnt=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1') cnt++;
            }
            if(cnt!=0){
                ans+=(cnt*curr);
                curr=cnt;
            }
        }
        return ans;
        
    }
};