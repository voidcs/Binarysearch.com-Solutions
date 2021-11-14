//https://binarysearch.com/problems/ASCII-String-to-Integer
int solve(string s) {
    int ans = 0;
    int n = s.length();
    for(int i = 0; i < n; i++){
        string num;
        while(i < n && isdigit(s[i])){
            num += s[i++];
        }
        if(num.size())
            ans += stoi(num);
    }
    return ans;
}