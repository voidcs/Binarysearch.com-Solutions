//https://binarysearch.com/problems/Sum-of-Nodes-with-Even-Grandparent-Values
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root) {
    //Simply keep track of the parent and grandparent for each node
    int ans = 0;
    if(!root)
        return 0;
    function<void(Tree*, vector<int>)> dfs = [&](Tree* u, vector<int> v){
        v.push_back(u->val);
        if(v.size() == 3){
            if(v[0]%2 == 0)
                ans += u->val;
            v.erase(v.begin());
        }
        if(u->right){
            dfs(u->right, v);
        }
        if(u->left)
            dfs(u->left, v);
    };
    dfs(root, {});
    return ans;
}