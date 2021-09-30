// we need an explicit stack
// Create an empty stack nodeStack and push root node to stack
//  Do the following while nodeStack is not empty. 
// ….a) Pop an item from the stack and print it. 
// ….b) Push right child of a popped item to stack 
// ….c) Push left child of a popped item to stack
// The right child is pushed before the left child to make sure that the left subtree is processed first

 vector<int> preorderTraversal(TreeNode* root) {
        vector<int> nodes;
        stack<TreeNode*> todo;
        while (root || !todo.empty()) {
            if (root) {
                nodes.push_back(root -> val);
                if (root -> right) {
                    todo.push(root -> right);
                }
                root = root -> left;
            } else {
                root = todo.top();
                todo.pop();
            }
        }
        return nodes;
    }
