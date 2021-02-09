//https://binarysearch.com/problems/Largest-Gap
int solve(vector<int>& a) {
    sort(a.begin(), a.end());
    int ans = 0;
    for(int i = 1; i < a.size(); i++)
        ans = max(ans, a[i]-a[i-1]);
    return ans;
}