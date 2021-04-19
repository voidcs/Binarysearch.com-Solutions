//https://binarysearch.com/problems/One-Integer
int solve(vector<int>& nums) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < nums.size(); i++)
        pq.push(nums[i]);
    int ans = 0;
    while(pq.size() > 1){
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        ans += (x+y);
        pq.push(x+y);
    }
    return ans;
}