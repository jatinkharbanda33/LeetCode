class Solution {
public:
    
    TreeNode* replaceValueInTree(TreeNode* root) {
        if(root==NULL) return NULL;
        queue<pair<TreeNode*,TreeNode*>> pending;
        unordered_map<TreeNode* ,TreeNode*> help;
        vector<pair<TreeNode*,int>> help2;
        pair<TreeNode*,TreeNode*> p(root,NULL);
        help.insert(p);
        pending.push(p);
        while(pending.size()!=0){
            int n=pending.size();
            int valv=0;
            for(auto it:help){
                valv+=it.first->val;   
             }
            for(int i=0;i<n;i++){
                pair<TreeNode* ,TreeNode*> pkk=pending.front();
                pending.pop();
                help.erase(pkk.first);
                int ix=0;
                TreeNode * daddy=pkk.second;
                if(daddy!=NULL){
                    if(daddy->left!=NULL){
                        ix+=daddy->left->val;
                    }
                    if(daddy->right!=NULL){
                        ix+=daddy->right->val;
                    }
                    
                }
                if(daddy==NULL) ix=pkk.first->val;
                if(pkk.first->left!=NULL){
                    pair<TreeNode* ,TreeNode*> baby(pkk.first->left,pkk.first);
                    help.insert(baby);
                    pending.push(baby);
                   
                }
                if(pkk.first->right!=NULL){
                    pair<TreeNode* ,TreeNode*> baby(pkk.first->right,pkk.first);
                    help.insert(baby);
                    pending.push(baby);
                }
                pair<TreeNode* ,int> mkc(pkk.first,valv-ix);
                help2.push_back(mkc);
            }
            
            
        }
        for(int i=0;i<help2.size();i++){
            help2[i].first->val=help2[i].second;
        }
        
        
        return root;
    }
};