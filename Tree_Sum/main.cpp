//https://binarysearch.com/problems/Tree-Sum
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
        sum += u->val;
        if(u->right){
            dfs(u->right);
        }
        if(u->left){
            dfs(u->left);
        }
    };
    dfs(root);
    return sum;
}