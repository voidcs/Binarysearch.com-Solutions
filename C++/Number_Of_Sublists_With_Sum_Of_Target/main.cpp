//https://binarysearch.com/problems/Number-of-Sublists-With-Sum-of-Target
int solve(vector<int>& nums, int target) {
    int n = nums.size();
    unordered_map<int, int> m;
    m[0]++;
    int sum = 0, ans = 0;
    for(int i = 0; i < n; i++){
        sum += nums[i];
        if(m.count(sum-target)){
            ans += m[sum-target];
        }
        m[sum]++;
    }
    return ans;
}