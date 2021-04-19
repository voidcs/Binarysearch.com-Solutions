//https://binarysearch.com/problems/Length-of-a-Linked-List
/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node) {
    int ans = 0;
    while(node){
        ans++;
        node = node->next;
    }
    return ans;
}