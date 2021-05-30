//https://binarysearch.com/problems/Search-in-a-Virtually-Complete-Binary-Tree
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

bool solve(Tree* root, int target) {
    if(!root)
        return false;
    vector<bool> dir;
    int t = target;
    while(t > 1){
        if(t % 2)
            dir.push_back(0);
        else
            dir.push_back(1);
        t /= 2;
    }
    reverse(dir.begin(), dir.end());
    bool valid = 0;
    function<void(Tree*, int)> dfs = [&](Tree* u, int i){
        if(u->val == target){
            valid = 1;
            return;
        }
        if(i == dir.size()){
            return;
        }
        if(dir[i] == 1){
            if(!u->left)
                return;
            else
                dfs(u->left, i+1);
        }
        else if(dir[i] == 0){
            if(!u->right)
                return;
            else
                dfs(u->right, i+1);
        }
    };
    dfs(root, 0);
    return valid;
}