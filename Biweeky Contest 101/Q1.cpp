class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int n=nums1.size();
        int m=nums2.size();
        unordered_map<int,int> jk;
        int p=INT_MAX;
        int q=INT_MAX;
        while(i<n){
            if(nums1[i]<p){
                p=nums1[i];
            }
            pair<int,int> p(nums1[i],1);
            jk.insert(p);
            
            i++;
        }
        i=0;
        priority_queue<int,vector<int>,greater<int>> pk;
        while(i<m){
            if(jk.count(nums2[i])>0){
                pk.push(nums2[i]);
            }
            if(nums2[i]<q){
                q=nums2[i];
            }
            i++;
        }
        if(pk.size()>0){
            return pk.top();
        }
        if(p==q) return p;
        return max(p,q)+10*min(p,q);
        
    }
};