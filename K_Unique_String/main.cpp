//https://binarysearch.com/problems/K-Unique-String
int solve(string s, int k) {
    map<char, int> m;
    for(int i = 0; i < s.size(); i++){
        m[s[i]]++;
    }
    vector<int> v;
    for(auto x: m){
        v.push_back(x.second);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    if(v.size() <= k)
        return 0;
    for(int i = 0; i < v.size()-k; i++){
        ans += v[i];
    }
    return ans;

}