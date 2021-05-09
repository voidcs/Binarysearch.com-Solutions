vector<vector<int>> solve(vector<int>& v) {
    vector<vector<int>> ans;
    int n = v.size();
    for(int i = 0; i < n; i++){
        vector<int> t;
        int x = v[i], j = i;
        while(j < n && x == v[j]){
            t.push_back(x);
            j++;
        }
        ans.push_back(t);
        i = j - 1;
    }
    return ans;
}