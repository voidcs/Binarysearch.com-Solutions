//https://binarysearch.com/problems/Reverse-a-Linked-List
/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node) {
    if(!node)
        return node;
    vector<int> v;
    while(node){
        v.push_back(node->val);
        node = node->next;
    }
    reverse(v.begin(), v.end());
    LLNode* ans = new LLNode;
    ans->val = v[0];
    LLNode* temp = ans;
    for(int i = 1; i < v.size(); i++){
        LLNode* u = new LLNode;
        u->val = v[i];
        temp->next = u;
        temp = u;
    }
    return ans;
}