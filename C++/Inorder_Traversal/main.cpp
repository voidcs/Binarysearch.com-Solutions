//https://binarysearch.com/problems/Inorder-Traversal
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree* root) {
    vector<int> ans;
    if(!root)
        return ans;
    function<void(Tree*)> dfs = [&](Tree* u){
        if(u->right)
            dfs(u->right);
        ans.push_back(u->val);
        if(u->left)
            dfs(u->left);
    };
    dfs(root);
    reverse(ans.begin(), ans.end());
    return ans;
}