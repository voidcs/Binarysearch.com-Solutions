//https://binarysearch.com/problems/Binary-Tree-to-Linked-List
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
LLNode* solve(Tree* root){
    if(!root)
        return nullptr;
    LLNode* head = new LLNode;
    head->val = -1;
    LLNode* temp = head;
    function<void(Tree*)> dfs = [&](Tree* u){
        if(u->left)
            dfs(u->left);
        cout<<u->val<<endl;
        if(head->val == -1){
            head->val = u->val;
            temp = head;
        }
        else{
            LLNode* x = new LLNode;
            x->val = u->val;
            temp->next = x;
            temp = temp->next;
        }
        if(u->right)
            dfs(u->right);
    };
    dfs(root);
    return head;
}