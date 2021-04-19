//https://binarysearch.com/problems/Fixed-Point
int solve(vector<int>& nums) {
    int n = nums.size();
    int ans = -1;
    for(int i = 0; i < n; i++){
        if(nums[i] == i){
            ans = i;
            break;
        }
    }
    return ans;
}