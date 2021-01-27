//https://binarysearch.com/problems/Univalue-Tree
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root) {
    set<int> s;
    queue<Tree*> q;
    q.push(root);
    while(!q.empty()){
        Tree* u = q.front();
        q.pop();
        s.insert(u->val);
        if(u->left != nullptr)
            q.push(u->left);
        if(u->right != nullptr)
            q.push(u->right);
    }
    return s.size() == 1;
}