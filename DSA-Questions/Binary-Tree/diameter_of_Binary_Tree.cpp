class Solution {
public:
    // for calculating height
    int height(TreeNode* root){
        if(root == NULL) return 0;

        return 1 + max(height(root->left), height(root->right));   // return height
    }
   
    int diameterOfBinaryTree(TreeNode* root){
        if(root == NULL) return 0;

        int d1 = height(root->left) + height(root->right);   // left height + right height = diameter
        int d2 = diameterOfBinaryTree(root->left);           // root ke left part ki height ko calculate krna
        int d3 = diameterOfBinaryTree(root->right);          // root ke right part ki height ko calculate krna

        // return max diameter from the above 3 diameters
        return max(d1, max(d2, d3));
    }
};