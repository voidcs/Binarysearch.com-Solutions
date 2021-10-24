//https://binarysearch.com/problems/Sum-of-Four-Numbers
bool solve(vector<int>& nums, int k){
    unordered_map<int, unordered_set<int>> m;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int sum = nums[i] + nums[j];
            if(!m.count(sum)){
                m[sum].insert(i);
                m[sum].insert(j);
            }
        }
    }
    bool ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int have = nums[i] + nums[j];
            int need = k - have;
            if(m.count(need) && !m[need].count(i) && !m[need].count(j))
                ans = 1;
        }
    }
    return ans;
}