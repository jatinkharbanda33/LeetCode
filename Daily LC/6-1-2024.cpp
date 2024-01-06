
class Solution {
public:
    int help(int i,vector<pair<int,pair<int,int>>> &jk,vector<int> &dp){
        if(i>=jk.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        // do it
        auto it = lower_bound(jk.begin(), jk.end(),  make_pair(jk[i].second.first, make_pair(0, 0)));

        int ind=it-jk.begin();
        int x=jk[i].second.second+help(ind,jk,dp);

        // dont do it

        int y=help(i+1,jk,dp);

        return dp[i]= max(x,y);
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<pair<int,pair<int,int>>> jk;
        int n=startTime.size();
        for(int i=0;i<n;i++){
            jk.push_back({startTime[i],{endTime[i],profit[i]}});
        }
        
        sort(jk.begin(),jk.end());
        vector<int> dp(n,-1);
        return help(0,jk,dp);

        
    }

    // Tabulation

     int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<pair<int,pair<int,int>>> jk;
        int n=startTime.size();
        for(int i=0;i<n;i++){
            jk.push_back({startTime[i],{endTime[i],profit[i]}});
        }
        
        sort(jk.begin(),jk.end());
        vector<int> dp(n+1,0);
        for(int i=n-1;i>=0;i--){
            // do it
            auto it=lower_bound(jk.begin(),jk.end(),make_pair(jk[i].second.first,make_pair(0,0)));
            int x=jk[i].second.second+dp[it-jk.begin()];
            int y=dp[i+1];
            dp[i]=max(x,y);
            // dont do it
        }
        return dp[0];   
    }
};