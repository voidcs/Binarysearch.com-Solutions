//https://binarysearch.com/problems/Longest-Tree-Sum-Path-From-Root-to-Leaf
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root) {
    int ans = 0, depth = 0, sum;
    function<void(Tree*, int, int)> dfs = [&](Tree* u, int d, int sum){
        sum += u->val;
        if(d >= depth){
            if(d > depth){
                ans = sum;
                depth = d;
            }
            else if(d == depth){
                ans = max(ans, sum);
            }
        }
        if(u->right)
            dfs(u->right, d+1, sum);
        if(u->left)
            dfs(u->left, d+1, sum);
    };
    dfs(root, 0, 0);
    return ans;
}