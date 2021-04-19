//https://binarysearch.com/problems/Range-Update
vector<int> solve(vector<int>& nums, vector<vector<int>>& operations) {
    vector<int> dx(nums.size()+1);
    for(int i = 0; i < operations.size(); i++){
        int l = operations[i][0];
        int r = operations[i][1];
        int x = operations[i][2];
        dx[l] += x;
        dx[r+1] -= x;
    }
    int prefix = 0;
    for(int i = 0; i < nums.size(); i++){
        prefix += dx[i];
        nums[i] += prefix;
    }
    return nums;
}