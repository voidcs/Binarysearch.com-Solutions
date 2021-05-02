bool solve(vector<int>& v) {
    sort(v.begin(), v.end());
    unordered_set<int> s;
    for(int i = 1; i < v.size(); i++){
        s.insert(v[i]-v[i-1]);
    }
    return s.size() == 1;
}