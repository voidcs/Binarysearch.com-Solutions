//https://binarysearch.com/problems/Factory-Trail
int solve(int n) {
    typedef long long ll;
    int ans = 0;
    for(ll i = 5; i <= n; i *= 5)
        ans += n/i;
    return ans;
}