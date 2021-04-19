//https://binarysearch.com/problems/Leaves-in-Same-Level
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
    map<int, int> m;
    function<void(Tree*, int)> dfs = [&](Tree* u, int depth){
        if(!u->right && !u->left){
            m[depth]++;
            return;
        }
        if(u->right){
            dfs(u->right, depth+1);
        }
        if(u->left)
            dfs(u->left, depth+1);
    };
    dfs(root, 0);
    return m.size() == 1;
}