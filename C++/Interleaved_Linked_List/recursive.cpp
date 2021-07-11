//https://binarysearch.com/problems/Interleaved-Linked-List
/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* a, LLNode* b) {
    if (a == NULL) return b;
    if (b == NULL) return a;
    a->next = solve(b, a->next);
    return a;
}