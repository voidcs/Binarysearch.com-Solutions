//https://binarysearch.com/problems/Sort-by-Frequency-and-Value
vector<int> solve(vector<int>& nums) {
    vector<int> ans;
    unordered_map<int, int> m;
    for(int i = 0; i < nums.size(); i++){
        m[nums[i]]++;
    }
    
    vector<array<int, 2>> v;
    for(auto x: m){
        v.push_back({x.first, x.second});
    }
    function<bool(array<int, 2>, array<int, 2>)> comp = [&](array<int, 2> a, array<int, 2> b){
        if(a[1] != b[1])
            return a[1] > b[1];
        return a[0] > b[0];
    };
    sort(v.begin(), v.end(), comp);
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i][1]; j++)
            ans.push_back(v[i][0]);
    }
    return ans;
}