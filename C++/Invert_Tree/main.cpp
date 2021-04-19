//https://binarysearch.com/problems/Invert-Tree
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
Tree* solve(Tree* root){
    if(!root)
        return root;
    //Depth first search
    //Breadth first search
    function<void(Tree*)> dfs = [&](Tree* u){
        if(u->right != nullptr)
            dfs(u->right);
        if(u->left != nullptr)
            dfs(u->left);
        swap(u->left, u->right);
    };
    dfs(root);
    return root;
}