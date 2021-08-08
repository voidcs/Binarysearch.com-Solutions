//https://binarysearch.com/problems/Lowest-Common-Ancestor
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root, int a, int b) {
    map<int, int> last, depth;
    function<void(Tree*, int)> dfs = [&](Tree* u, int d){
        depth[u->val] = d;
        if(u->left){
            last[u->left->val] = u->val;
            dfs(u->left, d+1);
        }
        if(u->right){
            last[u->right->val] = u->val;
            dfs(u->right, d+1);
        }
    };
    dfs(root, 0);
    if(depth[a] < depth[b]){
        swap(a, b);
    }
    while(depth[a] != depth[b]){
        a = last[a];
    }
    if(a == b)
        return a;
    while(a != b){
        a = last[a];
        b = last[b];
    }
    return a;
}
