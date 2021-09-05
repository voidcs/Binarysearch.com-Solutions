//https://binarysearch.com/problems/Reverse-a-Linked-List
/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node) {
    bool first = 1;
    if(!node)
        return node;
    LLNode* ans;
    function<void(LLNode*, LLNode*)> f = [&](LLNode* u, LLNode* par){
        if(u->next)
            f(u->next, u);
        if(first){
            ans = u;
            first = 0;
        }
        u->next = par;
    };
    f(node, nullptr);
    return ans;
}