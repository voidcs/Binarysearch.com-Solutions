//https://binarysearch.com/problems/Merging-Binary-Trees
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
Tree* solve(Tree* node0, Tree* node1) {
    function<void(Tree*, Tree*)> dfs = [&](Tree* u, Tree* v){
        if(!u || !v)
            return;
        u->val += v->val;
        if(!u->right)
            u->right = v->right;
        else
            dfs(u->right, v->right);
        if(!u->left)
            u->left = v->left;
        else
            dfs(u->left, v->left);
    };
    dfs(node0, node1);
    if(!node0)
        return node1;
    return node0;
}