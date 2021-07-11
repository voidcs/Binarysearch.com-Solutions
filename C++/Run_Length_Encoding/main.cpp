//https://binarysearch.com/problems/Run-Length-Encoding
string solve(string s) {
    int n = s.length();
    string ans;
    for(int i = 0; i < n; i++){
        int cnt = 1;
        while(i+1 < n && s[i+1] == s[i]){
            cnt++;
            i++;
        }
        ans += to_string(cnt) + c;
    }
    return ans;
}