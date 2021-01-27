//https://binarysearch.com/problems/Kth-Last-Node-of-a-Linked-List
/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node, int k){
    LLNode* temp = node;
    int n = 0;
    while(temp){
        n++;
        temp = temp->next;
    }
    int cnt = 0, ans = 0;
    while(node){
        if(n-k-1 == cnt){
            ans = node->val;
            break;
        }
        node = node->next;
        cnt++;
    }
    return ans;
}