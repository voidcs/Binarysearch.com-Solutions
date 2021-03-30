//https://binarysearch.com/problems/Noisy-Palindrome
bool solve(string s) {
    string t;
    for(int i = 0; i < s.length(); i++){
        if(islower(s[i]))
            t += s[i];
    }
    string x = t;
    reverse(x.begin(), x.end());
    return x == t;
}