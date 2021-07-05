//https://binarysearch.com/problems/Lowest-Sum-of-Pair-Larger-than-Target
int solve(vector<int>& v, int target) {
    int n = v.size();
    sort(v.begin(), v.end()); 
    int ans = 1e9;
    for(int i = 0; i < n; i++){
        int index = lower_bound(v.begin(), v.end(), target - v[i] + 1) - v.begin();
        if(index == i)
            index++;
        if(index == n)
            continue;
        ans = min(ans, v[i] + v[index]);
    }
    return ans;
}