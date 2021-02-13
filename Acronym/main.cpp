//https://binarysearch.com/problems/Acronym
string solve(string s) {
    string ans;
    for(int i = 0; i < s.length(); i++){
        string t;
        while(i < s.length() && isalpha(s[i])){
            t += s[i];
            i++;
        }
        if(t != "and"){
            ans += toupper(t[0]);
        }
    }
    string ans2;
    for(int i = 0; i < ans.length(); i++){
        if(isalpha(ans[i]))
            ans2 += ans[i];
    }
    return ans2;
}