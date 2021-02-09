//https://binarysearch.com/problems/Left-Side-View-of-a-Tree
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree* root){
    set<int> s;
    vector<int> ans;
    if(!root)
        return ans;
    function<void(Tree*, int)> dfs = [&](Tree* u, int depth){
        if(!s.count(depth)){
            s.insert(depth);
            ans.push_back(u->val);
        }
        if(u->left){
            dfs(u->left, depth+1);
        }
        if(u->right){
            dfs(u->right, depth+1);
        }
    };
    dfs(root, 0);
    return ans;
}