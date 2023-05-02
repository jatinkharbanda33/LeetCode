class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<bool> help1(51,false);
        vector<bool> help2(51,false);
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            help1[A[i]]=true;
            help2[B[i]]=true;
            int cnt=0;
            for(int j=0;j<=50;j++){
                if(help1[j] && help2[j]) cnt++;
            }
            ans[i]=cnt;
        }
        return ans;
    }
};