//https://binarysearch.com/problems/Interval-Union
vector<vector<int>> solve(vector<vector<int>>& v) {
    sort(v.begin(), v.end());
    int n = v.size();
    vector<vector<int>> ans;
    int start = v[0][0], end = v[0][1];
    for(int i = 1; i < n; i++){
        if(v[i][0] <= end){
            end = max(end, v[i][1]);
        }
        else{
            ans.push_back({start, end});
            start = v[i][0], end = v[i][1];
        }
    }
    ans.push_back({start, end});
    return ans;
}