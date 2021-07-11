//https://binarysearch.com/problems/Longest-Consecutive-Duplicate-String
int solve(string s) {
    int cnt = 0, ans = 0;
    int n = s.length();
    for(int i = 0; i < n; i++){
        int cnt = 1;
        while(i+1 < n && s[i+1] == s[i]){
            i++, cnt++;
        }
        ans = max(ans, cnt);
    }
    return ans;
}