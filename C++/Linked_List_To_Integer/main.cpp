//https://binarysearch.com/problems/Linked-List-to-Integer
/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node) {
    vector<int> digits;
    if(node->next == nullptr)
        return 0;
    while(node->next != nullptr){
        digits.push_back(node->val);
        node = node->next;
    }
    digits.push_back(node->val);
    reverse(digits.begin(), digits.end());
    int ans = 0;
    for(int i = 0; i < digits.size(); i++){
        ans += digits[i] * (1<<i);
    }
    return ans;
}