//https://binarysearch.com/problems/Count-Nodes-in-Complete-Binary-Tree
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root) {
    if(!root)
        return 0;
    function<int(Tree*)> dfs = [&](Tree* u){
        int left_height = 0, right_height = 0;
        auto x = u, y = u;
        while(x){
            left_height++;
            x = x->left;
        }
        while(y){
            right_height++;
            y = y->right;
        }
        //If the heights are equal, the tree is full and has 2^n - 1 nodes
        //Otherwise, we find the size of the left and right subtree and add 1 for our current node
        if(left_height == right_height)
            return (1 << left_height) - 1;
        else{
            return dfs(u->left) + dfs(u->right) + 1;
        }
    };
    int ans = dfs(root);
    return ans;
}