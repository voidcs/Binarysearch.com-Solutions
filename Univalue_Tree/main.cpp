//https://binarysearch.com/problems/Univalue-Tree
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root) {
    if(!root)
        return true;
    set<int> s;
    function<void(Tree*)> dfs = [&](Tree* u){
        s.insert(u->val);
        if(u->right)
            dfs(u->right);
        if(u->left)
            dfs(u->left);
    };
    dfs(root);
    return s.size() == 1;
}