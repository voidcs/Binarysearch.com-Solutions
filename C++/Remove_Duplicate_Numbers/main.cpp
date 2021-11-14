//https://binarysearch.com/problems/Remove-Duplicate-Numbers
vector<int> solve(vector<int>& nums) {
    unordered_map<int, int> m;
    for(int x: nums)
        m[x]++;
    vector<int> ans;
    for(int x: nums){
        if(m[x] == 1)
            ans.push_back(x);
    }
    return ans;
}