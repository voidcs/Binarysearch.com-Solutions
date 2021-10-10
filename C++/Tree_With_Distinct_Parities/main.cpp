//https://binarysearch.com/problems/Tree-with-Distinct-Parities
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root) {
    int ans = 0;
    function<int(Tree*)> dfs = [&](Tree* u){
        int left = -1, right = -1;
        if(u->left){
            left += dfs(u->left);
        }
        if(u->right){
            right += dfs(u->right);
        }
        if(left == -1 || right == -1)
            return u->val + left + right;
        if(left%2 != right%2)
            ans++;
        return u->val + left + right;
    };
    if(!root)
        return 0;
    dfs(root);
    return ans;
}