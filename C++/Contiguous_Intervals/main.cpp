//https://binarysearch.com/problems/Contiguous-Intervals//
vector<vector<int>> solve(vector<int>& v) {
    sort(v.begin(), v.end());
    int n = v.size();
    vector<vector<int>> ans;
    for(int i = 0; i < n; i++){
        int j = v[i];
        while(i+1< n && v[i+1] - v[i] == 1)
            i++;
        ans.push_back({j, v[i]});
    }
    return ans;
}