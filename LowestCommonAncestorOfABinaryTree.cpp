class Solution {
public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
			//base case
      if (root == null) {
         return null;
      }
      
      //case 1: p / q == root
      if (root == p || root == q) {
      	return root;
      }
      
      //recursion to find where p and q in the tree. 
      TreeNode left = lowestCommonAncestor(root.left, p, q);
      TreeNode right = lowestCommonAncestor(root.right, p, q);
      
      //case 1: p and q are in different subtree
      if (left != null && right != null) {
      		return root;
      }
      
      //case 2: p and q both in the left subtree
      if (left != null) {
      		return left;
      }
      
      //case 3: p and q both in the right subtree
      if (right != null) {
      		return right;
      }
      
      return null;
}
}
