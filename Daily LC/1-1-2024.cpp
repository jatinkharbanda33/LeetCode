class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // 1 way of doing is using pq
        // i am thinking of two ptrs
        // priority_queue<int,vector<int>,greater<int>> g1;
        // priority_queue<int,vector<int>,greater<int>> s1;
        // for(auto it:g){
        //     g1.push(it);
        // }
        // for(auto it:s){
        //     s1.push(it);
        // }
        // int cnt=0;
        // while(!s1.empty() && !g1.empty()){
        //     if(g1.top()<=s1.top()){
        //         g1.pop();
        //         s1.pop();
        //         cnt++;
        //     }
        //     else{
        //         s1.pop();
        //     }

        // }
        // return cnt; 
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int i=0;
        int j=0;
        int cnt=0;
        while(i<g.size() && j<s.size()){
            if(g[i]<=s[j]){
                i++;
                j++;
                cnt++;
            }
            else{
                j++;
            }
        }
        return cnt;
    }
};