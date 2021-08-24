//https://binarysearch.com/problems/Longest-Sublist-of-1s-After-K-Sets
int solve(vector<int>& v, int k) {
    int n = v.size();
    int l = 0, cnt = 0, ans = 0;
    for(int r = 0; r < n; r++){
        if(v[r])
            cnt++;
        while(cnt + k < r - l + 1){
            if(v[l])
                cnt--;
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    return ans;
}