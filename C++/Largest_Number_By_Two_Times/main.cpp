//https://binarysearch.com/problems/Largest-Number-By-Two-Times
bool solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    return nums[n-1] > nums[n-2]*2;
}