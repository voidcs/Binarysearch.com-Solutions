//https://binarysearch.com/problems/Palindrome-Linked-List
/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
bool solve(LLNode* node){
    if(!node)
        return 1;
    vector<int> v;
    while(node){
        v.push_back(node->val);
        node = node->next;
    }
    vector<int> r = v;
    reverse(r.begin(), r.end());
    return r==v;
}