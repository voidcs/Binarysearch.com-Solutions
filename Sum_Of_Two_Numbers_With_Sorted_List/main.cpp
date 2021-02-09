//https://binarysearch.com/problems/Sum-of-Two-Numbers-with-Sorted-List
bool solve(vector<int>& nums, int k) {
    if(nums.size() < 2)
        return false;
    int l = 0, r = nums.size() - 1;
    bool flag = 0;
    while(l < r){
        int sum = nums[l] + nums[r];
        if(sum == k)
            flag = 1;
        if(sum < k)
            l++;
        else
            r--;
    }
    return flag;
}