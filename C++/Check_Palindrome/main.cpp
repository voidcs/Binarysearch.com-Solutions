//https://binarysearch.com/problems/Check-Palindrome
bool solve(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return t == s;
}