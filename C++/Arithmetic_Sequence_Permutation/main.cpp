//https://binarysearch.com/problems/Arithmetic-Sequence-Permutation
bool solve(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    if(nums.size() <= 2)
        return true;
    int diff = nums[1] - nums[0];
    bool ans = 1;
    for(int i = 1; i < n; i++){
        if(nums[i] - nums[i-1] != diff)
            ans = 0;
    }
    return ans;
}