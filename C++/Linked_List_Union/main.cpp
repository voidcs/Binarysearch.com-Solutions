//https://binarysearch.com/problems/Linked-List-Union
/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* a, LLNode* b) {
    if(!a && !b)
        return a;
    set<int> s;
    while(a){
        s.insert(a->val);
        a = a->next;
    }
    while(b){
        s.insert(b->val);
        b = b->next;
    }
    LLNode* ans = new LLNode;
    auto it = s.begin();
    ans->val = *it;
    it++;
    LLNode* t = ans;
    while(it != s.end()){
        LLNode* x = new LLNode;
        x->val = *it;
        t->next = x;
        t = t->next;
        it++;
    }
    return ans;
}