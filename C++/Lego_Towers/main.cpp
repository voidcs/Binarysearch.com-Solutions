//https://binarysearch.com/problems/Lego-Towers
int solve(vector<int>& heights, int k) {
    sort(heights.begin(), heights.end());
    int n = heights.size();
    vector<int> p(n+1);
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += heights[i];
        p[i+1] = sum;
    }
    int ans = 1e9;
    for(int i = k-1; i < n; i++){
        int need = heights[i] * k;
        ans = min(ans, need - (p[i+1] - p[i-k+1]));
    }
    return ans;
}