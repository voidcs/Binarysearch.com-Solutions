//https://binarysearch.com/problems/Longest-Increasing-Subsequence
int solve(vector<int>& nums){
    vector<int> ans;
    for(int x: nums) {
        if(ans.empty() || x > ans[ans.size()-1]) 
            ans.push_back(x);
        else 
            *lower_bound(ans.begin(), ans.end(), x) = x;
    }
    return ans.size();
}