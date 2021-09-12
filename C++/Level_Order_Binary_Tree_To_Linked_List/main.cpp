//https://binarysearch.com/problems/Level-Order-Binary-Tree-to-Linked-List
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(Tree* root) {
    LLNode* ans = new LLNode;
    LLNode* t = ans;
    queue<Tree*> q;
    q.push(root);
    while(q.size()){
        Tree* u = q.front();
        if(u->left)
            q.push(u->left);
        if(u->right)
            q.push(u->right);
        q.pop();
        t->val = u->val;
        if(q.size()){
            t->next = new LLNode;
            t = t->next;
        }
    }
    return ans;
}