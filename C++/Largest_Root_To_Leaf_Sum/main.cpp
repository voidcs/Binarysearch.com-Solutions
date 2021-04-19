//https://binarysearch.com/problems/Largest-Root-to-Leaf-Sum
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root){
    int ans = 0;
    if(!root)
        return ans;
    function<void(Tree*, int)> dfs = [&](Tree* u, int sum){
        sum += u->val;
        if(u->right)
            dfs(u->right, sum);
        if(u->left)
            dfs(u->left, sum);
        ans = max(ans, sum);
    };
    dfs(root, 0);
    return ans;
}