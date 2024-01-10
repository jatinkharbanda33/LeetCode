class Solution {
public:
    int ans=0;
    int playWithDistance(TreeNode * root,int start){
        if(root==NULL) return 0;
        int left=playWithDistance(root->left,start);
        int right=playWithDistance(root->right,start);
        int depth=0;
        if(root->val==start){
            ans=max(ans,max(left,right));
            depth=-1;
        }
        else if(left>=0  && right>=0){
            depth=1+max(left,right);
        }
        else{
            ans=max(ans,abs(left)+abs(right));
            depth=min(left,right)-1;
        }
        return depth;
    }
    int amountOfTime(TreeNode* root, int start) {
        playWithDistance(root,start);
        return ans;
        
    }
};