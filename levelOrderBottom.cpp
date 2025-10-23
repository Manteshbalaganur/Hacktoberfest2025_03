class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
       vector<vector<int>> arr;
        if(root == NULL){
            return {};
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int s= q.size();
            vector<int> ans;// 1  d 
            for(int i=0;i<s;i++){
            TreeNode * temp=q.front();
            q.pop();
            ans.push_back(temp->val);
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
            }
            arr.push_back(ans);// 1 d vector store hoga 2d mei 
        }
        reverse(arr.begin(),arr.end());  
        return  arr;
    }
};
