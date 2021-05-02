//https://binarysearch.com/problems/Insert-Into-Linked-List
/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* head, int pos, int val) {
    int cnt = 0;
    if(!pos){
        auto y = new LLNode;
        y->val = val;
        y->next = head;
        return y;
    }
    auto temp = head;
    while(cnt+1 < pos){
        temp = temp->next;
        cnt++;
    }
    LLNode* x = new LLNode;
    LLNode* t = temp->next;
    temp->next = x;
    x->val = val;
    x->next = t;
    return head;
}