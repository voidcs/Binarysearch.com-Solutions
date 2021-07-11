//https://binarysearch.com/problems/Interleaved-Linked-List
/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* l0, LLNode* l1) {
    if(!l0 && !l1)
        return l0;
    LLNode* ans = new LLNode;
    auto t = ans;
    while(l0 && l1){
        t->val = l0->val;
        t->next = new LLNode;
        t = t->next;
        t->val = l1->val;
        if(l1->next || l0->next){
            t->next = new LLNode;
            t = t->next;
        }
        l0 = l0->next;
        l1 = l1->next;
    }
    while(l0){
        t->val = l0->val;
        if(l0->next){
            t->next = new LLNode;
            t = t->next;
        }
        l0 = l0->next;
    }
    while(l1){
        t->val = l1->val;
        if(l1->next){
            t->next = new LLNode;
            t = t->next;
        }
        l1 = l1->next;
    }
    
    return ans;
}