//https://binarysearch.com/problems/Number-of-Unique-Character-Substrings
int solve(string s) {
    int n = s.length();
    int ans = n;
    char c, cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == c)
            cnt++;
        else{
            cnt = 1;
            c = s[i];
        }
        ans += (cnt-1);
    }
    return ans;
}