//https://binarysearch.com/problems/Index-with-Equal-Left-and-Right-Sums
int solve(vector<int>& nums) {
    int sum = 0;
    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
    }
    int left = 0;
    for(int i = 0; i < nums.size(); i++){
        if(left == sum-left-nums[i])
            return i;
        left += nums[i];
    }
    return -1;
}