//https://binarysearch.com/problems/Delete-Even-Leaves
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
Tree* solve(Tree* root) {
    function<void(Tree*, Tree*, string)> dfs = [&](Tree* u, Tree* par, string from){
        if(u->left)
            dfs(u->left, u, "left");
        if(u->right)
            dfs(u->right, u, "right");
        if(!u->left && !u->right && u->val%2 == 0){
            if(par == nullptr){
                root = nullptr;
                return;
            }
            if(from == "left")
                par->left = nullptr;
            else if(from == "right")
                par->right = nullptr;
        }
    };
    if(!root)
        return root;
    dfs(root, nullptr, "");
    return root;
}