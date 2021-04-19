//https://binarysearch.com/problems/Sorted-Elements
int solve(vector<int>& nums) {
    vector<int> v = nums;
    sort(v.begin(), v.end());
    int ans = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == nums[i])
            ans++;
    }
    return ans;
}