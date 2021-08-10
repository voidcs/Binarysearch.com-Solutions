//https://binarysearch.com/problems/Most-Frequent-Subtree-Sum
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root){
    unordered_map<int, int> m;
    function<int(Tree*)> dfs = [&](Tree* u){
        int sum = u->val;
        if(u->left){
            sum += dfs(u->left);
        }
        if(u->right){
            sum += dfs(u->right);
        }
        m[sum]++;
        return sum;
    };
    dfs(root);
    int ans = 0, f = 0;
    for(auto x: m){
        if(x.second > f){
            f = x.second;
            ans = x.first;
        }
    }
    return ans;
}