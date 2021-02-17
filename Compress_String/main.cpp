//https://binarysearch.com/problems/Compress-String
string solve(string s) {
    string ans;
    for(int i = 0; i < s.length(); i++){
        char c = s[i];
        while(s[i] == c)
            i++;
        i--;
        ans += c;
    }
    return ans;
}