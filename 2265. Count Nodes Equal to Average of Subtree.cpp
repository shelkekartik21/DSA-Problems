class Solution {
private:
    void fun(TreeNode* head, int &sum, int &nodes){
        if(head == NULL){
            return;
        }
        
        fun(head->left, sum, nodes);
        sum += head->val;
        nodes = nodes+1;
        fun(head->right, sum, nodes);
        
    }
    
public:
    int averageOfSubtree(TreeNode* root) {
        int count = 0;
        queue<TreeNode*> q;
        
        q.push(root);
        
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            
            int sum = 0, nodes = 0;
            
            fun(curr, sum, nodes);
            int avg = sum/nodes;
            
            if(curr->val == avg){
                count++;
            }
            
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
        
        return count;
    }
};