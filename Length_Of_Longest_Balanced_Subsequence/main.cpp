//https://binarysearch.com/problems/Length-of-Longest-Balanced-Subsequence
int solve(string s) {
    int n = s.length(), bal = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '(')
            bal++;
        else{
            if(bal)
                ans += 2;
            bal--;
        }
        bal = max(bal, 0);
    }
    return ans;
}