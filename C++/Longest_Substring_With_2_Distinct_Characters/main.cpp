//https://binarysearch.com/problems/Longest-Substring-with-2-Distinct-Characters
int solve(string s) {
    int n = s.length();
    vector<int> cnt(26);
    int l = 0;
    int ans = 0, letterCnt = 0;
    for(int r = 0; r < n; r++){
        cnt[s[r]-'a']++;
        if(cnt[s[r]-'a'] == 1)
            letterCnt++;
        while(letterCnt > 2){
            cnt[s[l]-'a']--;
            if(cnt[s[l]-'a'] == 0)
                letterCnt--;
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    return ans;
}