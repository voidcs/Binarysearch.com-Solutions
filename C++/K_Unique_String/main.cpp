//https://binarysearch.com/problems/K-Unique-String
int solve(string s, int k) {
    map<int, int> m;
    for(char c: s){
        m[c]++;
    }
    vector<int> v;
    for(auto x: m){
        v.push_back(x.second);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for(int i = 0; i < (int)v.size() - k; i++){
        ans += v[i];
    }
    return ans;
}