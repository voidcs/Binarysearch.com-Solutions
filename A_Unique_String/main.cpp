//https://binarysearch.com/problems/A-Unique-String
bool solve(string s) {
    set<char> cnt;
    for(int i = 0; i < s.length(); i++){
        cnt.insert(s[i]);
    }
    return cnt.size() == s.length();
}