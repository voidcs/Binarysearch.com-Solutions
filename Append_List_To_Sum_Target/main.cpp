//https://binarysearch.com/problems/Append-List-to-Sum-Target
int solve(vector<int>& nums, int k, int target) {
    int sum = 0;
    for(int i = 0; i < nums.size(); i++)
        sum += nums[i];
    int ans = (abs(target-sum)+(k-1))/k;
    return ans;
}