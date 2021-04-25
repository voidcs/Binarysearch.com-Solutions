//https://binarysearch.com/problems/Level-Order-Traversal
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree* root) {
    vector<int> ans;
    if(!root)
        return ans;
    queue<Tree*> q;
    q.push(root);
    while(q.size()){
        Tree* u = q.front();
        q.pop();
        ans.push_back(u->val);
        if(u->left)
            q.push(u->left);
        if(u->right)
            q.push(u->right);
    }
    return ans;
}