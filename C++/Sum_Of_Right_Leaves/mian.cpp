//https://binarysearch.com/problems/Sum-of-Right-Leaves
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root) {
    int sum = 0;
    if(root == nullptr)
        return 0;
    function<void(Tree*)> dfs = [&](Tree* u){
        if(u->right != nullptr){
            if(u->right->right == nullptr && u->right->left == nullptr)
                sum += u->right->val;
            dfs(u->right);
        }
        if(u->left != nullptr){
            dfs(u->left);
        }
    };
    dfs(root);
    return sum;
}