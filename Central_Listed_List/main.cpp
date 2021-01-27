//https://binarysearch.com/problems/Central-Linked-List
/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node){
    int n = 0;
    LLNode* temp = node;
    while(temp){
        n++;
        temp = temp->next;
    }
    int i = 0, ans = 0;
    while(node){
        if(i == n/2){
            ans = node->val;
            break;
        }
        i++;
        node = node->next;
    }
    return ans;
}