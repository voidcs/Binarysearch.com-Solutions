//https://binarysearch.com/problems/Binary-Search-Tree-Iterator
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
class BSTIterator {
    public:
    int n;
    int i;
    vector<int> v;
    BSTIterator(Tree* root) {
        function<void(Tree*)> dfs = [&](Tree* u){
            if(u->left)
                dfs(u->left);
            v.push_back(u->val);
            if(u->right)
                dfs(u->right);
        };
        dfs(root);
        n = v.size();
        i = 0;
    }

    int next() {
        return v[i++];
    }

    bool hasnext() {
        return i < n;
    }
};