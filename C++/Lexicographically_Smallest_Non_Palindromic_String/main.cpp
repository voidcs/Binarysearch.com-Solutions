//https://binarysearch.com/problems/Lexicographically-Smallest-Non-Palindromic-String
string solve(string s) {
    int n = s.length();
    for(int i = 0; i < n/2; i++){
        if(s[n-i-1] != 'a'){
            s[i] = 'a';
            return s;
        }
    }
    s[n-1] = 'b';
    return s;
}