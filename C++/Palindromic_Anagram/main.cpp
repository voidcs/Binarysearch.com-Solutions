//https://binarysearch.com/problems/Palindromic-Anagram
bool solve(string s) {
    map<char, int> m;
    for(int i = 0; i < s.length(); i++)
        m[s[i]]++;
    int cnt = 0;
    for(auto x: m){
        if(x.second%2)
            cnt++;
    }
    return cnt <= 1;
}