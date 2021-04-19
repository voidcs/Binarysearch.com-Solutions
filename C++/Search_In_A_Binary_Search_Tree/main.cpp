//https://binarysearch.com/problems/Search-in-a-Binary-Search-Tree
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root, int val) {
    if(!root)
        return false;
    bool found = 0;
    function<void(Tree*)> dfs = [&](Tree* u){
        if(u->val == val)
            found = 1;
        if(u->right){
            dfs(u->right);
        }
        if(u->left){
            dfs(u->left);
        }
    };
    dfs(root);
    return found;
}