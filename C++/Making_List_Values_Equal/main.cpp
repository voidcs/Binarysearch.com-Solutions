//https://binarysearch.com/problems/Making-List-Values-Equal
int solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    return nums[n-1] - nums[0];
}