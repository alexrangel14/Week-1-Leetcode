/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        //vector<vector<int>> solution;
        return levelPrint(root);
        //return solution;
    }
    
    vector<vector<int>> levelPrint(TreeNode* root){
        vector<vector<int>> solution;
        
        if (root == nullptr){
            return solution;
        }
        
        queue<TreeNode*> q;
        TreeNode* frontHolder;
        q.push(root);
        
        vector<int> currentLevel;
        
        while (!q.empty()){
            int count = q.size();
                
            while (count > 0){
                frontHolder = q.front();
                q.pop();
                
                currentLevel.push_back(frontHolder->val);
                
                //cout << frontHolder->val << " ";
                
                if (frontHolder->left != nullptr){
                    q.push(frontHolder->left);
                }
                
                if (frontHolder->right != nullptr){
                    q.push(frontHolder->right);
                }
                
                count--;
            }
            solution.push_back(currentLevel);
            currentLevel.clear();
            //cout << endl;
        }
        return solution;
    }
};
