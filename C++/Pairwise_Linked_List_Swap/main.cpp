//https://binarysearch.com/problems/Pairwise-Linked-List-Swap
/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node){
    auto t = node;
    while(t && t->next){
        swap(t->val, t->next->val);
        t = t->next->next;
    }
    return node;
}