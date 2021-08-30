//https://binarysearch.com/problems/Maximum-Unique-Sublist-Sum
int solve(vector<int>& v) {
    int n = v.size();
    unordered_map<int, int> m;
    int l = 0, ans = 0, sum = 0;
    for(int r = 0; r < n; r++){
        sum += v[r];
        m[v[r]]++;
        while(m[v[r]] > 1){
            m[v[l]]--;
            sum -= v[l];
            l++;
        }
        ans = max(ans, sum);
    }
    return ans;
}