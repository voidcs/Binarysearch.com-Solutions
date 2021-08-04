//https://binarysearch.com/problems/Number-of-K-Divisible-Sublists
int solve(vector<int>& v, int k) {
    int n = v.size();
    unordered_map<int, int> m;
    m[0]++;
    int ans = 0, sum = 0;
    for(auto x: v){
        sum += x;
        sum %= k;
        ans += m[sum];
        m[sum]++;
    }
    return ans;
}