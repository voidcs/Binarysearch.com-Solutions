//https://binarysearch.com/problems/Vertical-Lines-in-Binary-Tree
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root) {
    int left = 0, right = 0;
    function<void(Tree*, int)> dfs = [&](Tree* u, int pos){
        left = min(left, pos);
        right = max(right, pos);
        if(u->left)
            dfs(u->left, pos-1);
        if(u->right)
            dfs(u->right, pos+1);
    };
    dfs(root, 0);
    return right - left + 1;
}