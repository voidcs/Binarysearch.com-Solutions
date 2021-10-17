int solve(vector<string>& shows, vector<int>& durations, int k) {
    map<string, int> m;
    for(int i = 0; i < shows.size(); i++){
        m[shows[i]] += durations[i];
    }
    vector<int> v;
    for(auto x: m){
        v.push_back(x.second);
    }
    sort(v.rbegin(), v.rend());
    int ans = 0;
    for(int i = 0; i < k; i++)
        ans += v[i];
    return ans;
}