//https://binarysearch.com/problems/Largest-Tree-Sum-Path
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root) {
    int ans = 0;
    function<int(Tree*, int)> dfs = [&](Tree* u, int sum){
        sum += u->val;
        int leftSum = 0, rightSum = 0;
        if(u->left){
            leftSum = dfs(u->left, 0);
            sum += leftSum;
        }
        if(u->right){
            rightSum = dfs(u->right, 0);
            sum += rightSum;
        }
        ans = max({ans, u->val + rightSum + leftSum, u->val});
        return max(leftSum, rightSum) + u->val;
    };
    dfs(root, 0);
    return ans;
}