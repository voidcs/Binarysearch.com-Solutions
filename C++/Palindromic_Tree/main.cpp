//https://binarysearch.com/problems/Palindromic-Tree
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
        return false;
    vector<int> t;
    function<void(Tree*)> dfs = [&](Tree* u){
        if(u->left)
            dfs(u->left);
        t.push_back(u->val);
        if(u->right)
            dfs(u->right);
    };
    dfs(root);
    vector<int> r = t;
    reverse(r.begin(), r.end());
    return r == t;
}