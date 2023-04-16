class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int i=0;
        int cnt0=0;
        int cnt1=0;
        int n=s.length();
        int ans=0;
        if(n==0){
            return 0;
        }
        while(i<n){
            if(s[i]=='0')cnt0++;
            if(s[i]=='1') cnt1++;
             i++;
        }
        if(cnt0==0){
            return 0;
        }
        cnt0=0;
        cnt1=0;
        i=0;
        while(i<n){
            if(s[i]=='0' && cnt1==0){
                cnt0++;
            }
            else if(s[i]=='1'){
                cnt1++;
            }
            else if(s[i]=='0' && cnt1>0){
                ans=max(ans,2*min(cnt1,cnt0));
                cnt1=0;
                cnt0=1;
                
            }
            
            i++;
        }
        ans=max(ans,2*min(cnt1,cnt0));
                 return ans;
        
    }
};