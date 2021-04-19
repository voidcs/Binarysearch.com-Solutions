//https://binarysearch.com/problems/Sum-of-Digit-Paths-in-a-Tree
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
    int ans = 0;
    function<void(Tree*, string)> dfs = [&](Tree* u, string s){
        s += to_string(u->val);
        if(!u->right && !u->left){
            int pow = 1;
            int n = s.length();
            int sum = 0;
            for(int i = n-1; i >= 0; i--){
                sum += (s[i] - '0') * pow;
                pow *= 10;
            }
            cout<<"sum :"<<sum<<endl;
            ans += sum;
            return;
        }
        if(u->right){
            dfs(u->right, s);
        }
        if(u->left){
            dfs(u->left, s);
        }
    };
    dfs(root, "");
    return ans;
}