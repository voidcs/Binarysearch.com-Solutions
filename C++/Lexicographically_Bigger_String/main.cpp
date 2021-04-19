//https://binarysearch.com/problems/Lexicographically-Bigger-String
bool solve(string s, string t){
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    int flag = 3;
    for(int i = 0; i < s.length(); i++){
        flag &= 1 + ((s[i] <= t[i])*2);
        flag &= 2 + (t[i] <= s[i]);
    }
    return flag;
}