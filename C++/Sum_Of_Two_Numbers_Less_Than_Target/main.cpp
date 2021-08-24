//https://binarysearch.com/problems/Sum-of-Two-Numbers-Less-Than-Target
int solve(vector<int>& v, int target) {
    int n = v.size();
    sort(v.begin(), v.end());
    int l = 0, r = n-1;
    int ans = -1e9;
    while(l < r){
        int sum = v[l] + v[r];
        if(sum >= target){
            r--;
        }
        else if(sum < target){
            l++;
            ans = max(ans, sum);
        }
    }
    return ans;
}