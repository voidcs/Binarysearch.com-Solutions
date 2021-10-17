//https://binarysearch.com/problems/Largest-Sublist-Sum
int solve(vector<int>& nums) {
    int n = nums.size();
    int ans = -1e9, sum = 0, smallest = 0;
    for(int i = 0; i < n; i++){
        sum += nums[i];
        ans = max(ans, sum - smallest);
        smallest = min(smallest, sum);
    }
    return ans;
}