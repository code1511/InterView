// we need an explicit stack
// Create an empty stack nodeStack and push root node to stack
//  Do the following while nodeStack is not empty. 
// ….a) Pop an item from the stack and print it. 
// ….b) Push right child of a popped item to stack 
// ….c) Push left child of a popped item to stack
// The right child is pushed before the left child to make sure that the left subtree is processed first

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>s;
        while(root || !s.empty()){
            //if root is not null
            if(root){
                ans.push_back(root->val);
                //if right node of root is not null then push it to the stack
                if(root->right){
                    s.push(root->right);
                }
                root=root->left;
            }else{
                root=s.top();
                s.pop();
            }
        }
        return ans;
    }
};
