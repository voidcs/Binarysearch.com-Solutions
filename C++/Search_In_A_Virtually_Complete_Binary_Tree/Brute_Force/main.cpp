//https://binarysearch.com/problems/Search-in-a-Virtually-Complete-Binary-Tree
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root, int target) {
    bool ans = false;
    function<void(Tree*)> dfs = [&](Tree* u){
        if(u->val == target)
            ans = true;
        if(u->left)
            dfs(u->left);
        if(u->right)
            dfs(u->right);
    };
    dfs(root);
    return ans;
}