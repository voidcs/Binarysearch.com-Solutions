//https://binarysearch.com/problems/K-Prefix
int solve(vector<int>& nums, int k) {
    int n = nums.size();
    int sum = 0;
    int ans = -1;
    for(int i = 0; i < n; i++){
        sum += nums[i];

        if(sum < k)
        ans = max(ans, i);
    }
    return ans;
}