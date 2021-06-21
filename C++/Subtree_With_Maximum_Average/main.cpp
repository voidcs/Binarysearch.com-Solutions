//https://binarysearch.com/problems/Subtree-with-Maximum-Average
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
double solve(Tree* root) {
    double ans = 0;
    if(!root)
        return 0;
    function<pair<int, double>(Tree*)> dfs = [&](Tree* u){
        pair<int, double> x = {0, 0};
        int cnt = 1;
        double sum = u->val;
        if(u->left){
            auto c = dfs(u->left);
            cnt += c.first;
            sum += c.second;
        }
        if(u->right){
            auto c = dfs(u->right);
            cnt += c.first;
            sum += c.second;
        }
        ans = max(ans, sum / cnt);
        pair<int, double> r;
        r.first = cnt, r.second = sum;
        return r;
    };
    dfs(root);
    return ans;
}