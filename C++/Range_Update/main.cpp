//https://binarysearch.com/problems/Range-Update
vector<int> solve(vector<int>& nums, vector<vector<int>>& operations) {
    int n = nums.size();
    vector<int> p(n+1);
    for(int i = 0; i < operations.size(); i++){
        int left = operations[i][0];
        int right = operations[i][1];
        int x = operations[i][2];
        p[left] += x;
        p[right+1] -= x;
    }
    vector<int> ans(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += p[i];
        ans[i] = sum+nums[i];
    }
    return ans;
}