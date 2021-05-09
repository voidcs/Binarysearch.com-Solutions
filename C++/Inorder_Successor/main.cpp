/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root, int t) {
    set<int> s;
    function<void(Tree*)> dfs = [&](Tree* u){
        s.insert(u->val);
        if(u->right)
            dfs(u->right);
        if(u->left)
            dfs(u->left);
    };
    dfs(root);
    return *s.upper_bound(t);
}