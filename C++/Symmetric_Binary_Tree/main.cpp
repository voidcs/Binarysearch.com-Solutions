//https://binarysearch.com/problems/Symmetric-Binary-Tree
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root) {
    function<bool(Tree*, Tree*)> dfs = [&](Tree* l, Tree* r){
        if(!l && !r)
            return true;
        if(l && r && l->val == r->val)
            return (dfs(l->left, r->right) && dfs(l->right, r->left));
        return false;
    };
    return dfs(root, root);
}