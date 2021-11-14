//https://binarysearch.com/problems/ASCII-String-to-Integer
int solve(string s) {
    int ans = 0;
    int n = s.length();
    for(int i = 0; i < n; i++){
        int num = 0;
        while(i < n && isdigit(s[i])){
            num = (num*10) + (s[i++]-'0');
        }
        ans += num;
    }
    return ans;
}