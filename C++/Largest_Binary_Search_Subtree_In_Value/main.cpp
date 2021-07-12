//https://binarysearch.com/problems/Largest-Binary-Search-Subtree-in-Value
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
struct node{
    int sum = 0;
    bool bst = 1;
};
int solve(Tree* root) {
    int ans = 0;
    if(!root)
        return ans;
    function<node(Tree*)> dfs = [&](Tree* u){
        node x;
        x.sum = u->val;
        node left, right;
        if(u->left){
            left = dfs(u->left);
            x.sum += left.sum;
            if(u->left->val >= u->val || !left.bst)
                x.bst = 0;
        }
        if(u->right){
            right = dfs(u->right);
            x.sum += right.sum;
            if(u->right->val <= u->val || !right.bst)
                x.bst = 0;
        }
        if(x.bst)
            ans = max(ans, x.sum);
        return x;
    };
    dfs(root);
    return ans;
}