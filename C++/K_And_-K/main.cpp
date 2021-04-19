//https://binarysearch.com/problems/K-and-K
int solve(vector<int>& nums) {
    set<int> s;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] < 0)
            s.insert(nums[i]*-1);
    }
    int ans = -1;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 0)
            ans = max(ans, 0);
        if(s.count(nums[i]))
            ans = max(ans, nums[i]);
    }
    return ans;
}