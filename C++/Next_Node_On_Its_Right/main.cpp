//https://binarysearch.com/problems/Next-Node-on-Its-Right
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
Tree* solve(Tree* tree, int target) {
    int ready = -1;
    queue<pair<Tree*, int>> q;
    q.push({tree, 0});
    while(q.size()){
        Tree *u = q.front().first;
        int level = q.front().second;
        q.pop();
        if(u->left)
            q.push({u->left, level+1});
        if(u->right)
            q.push({u->right, level+1});
        if(ready != -1 && level == ready)
            return u;
        if(u->val == target)
            ready = level;
    }
    return nullptr;
}