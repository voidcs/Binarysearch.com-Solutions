//https://binarysearch.com/problems/Largest-Sublist-Sum
int solve(vector<int>& v) {
    int n = v.size();
    int sum = -1e9, ans = -1e9;
    for(int i = 0; i < n; i++){
        sum = max(sum + v[i], v[i]);
        ans = max(ans, sum);
    }
    return ans;
}