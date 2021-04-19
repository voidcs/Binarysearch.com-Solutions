//https://binarysearch.com/problems/Largest-Gap
int solve(vector<int>& v) {
    sort(v.begin(), v.end());
    int ans = 0;
    for(int i = 1; i < v.size(); i++){
        ans = max(ans, v[i] - v[i-1]);
    }
    return ans;
}