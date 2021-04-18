//https://binarysearch.com/problems/Count-Nodes-in-Complete-Binary-Tree
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
    if(!root)
        return 0;
    function<void(Tree*)> dfs = [&](Tree* u){
        ans++;
        if(u->right)
            dfs(u->right);
        if(u->left)
            dfs(u->left);
    };

    dfs(root);
    return ans;
}