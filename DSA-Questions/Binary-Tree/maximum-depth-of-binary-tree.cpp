/*

Problem Name: Maximum Depth of Binary Tree

Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Example 1:

Input: root = [3,9,20,null,null,15,7]
Output: 3
Example 2:

Input: root = [1,null,2]
Output: 2

Constraints:

The number of nodes in the tree is in the range [0, 104].
-100 <= Node.val <= 100


<----------------------->  Complexity  <-------------------->

1. Time Complexity: O(N)
2. Space Complexity: O(N)


*/

class Solution {
public:
    int maxDepth(TreeNode* root) {

        //base case
        if(root == NULL) return 0;

        // Calculate Depth of left subtree
        int DepthOfLeft = maxDepth(root->left);
        // Calculate Depth of right subtree
        int DepthOfRight = maxDepth(root->right);

        // Find which is max from both left and right and also add +1 ---> because of root node 
        return max(DepthOfLeft, DepthOfRight) + 1;
    }
};