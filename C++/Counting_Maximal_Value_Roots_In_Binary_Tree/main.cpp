//https://binarysearch.com/problems/Counting-Maximal-Value-Roots-in-Binary-Tree
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
    function<int(Tree*)> dfs = [&](Tree* u){
        int x = -1;
        if(u->right){
            x = max(x, dfs(u->right));
        }
        if(u->left){
            x = max(x, dfs(u->left));
        }
        if(u->val >= x)
            ans++;
        return max(x, u->val);
    };
    dfs(root);
    return ans;
}