//https://binarysearch.com/problems/Vertical-Cipher
vector<string> solve(string s, int k) {
    int n = s.length();
    vector<string> ans(k);
    int j = 0;
    for(int i = 0; i < n; i++){
        ans[j++] += s[i];
        j %= k;
    }
    return ans;
}