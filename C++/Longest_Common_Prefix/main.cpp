//https://binarysearch.com/problems/Longest-Common-Prefix
string solve(vector<string>& words) {
    int len = 0;
    bool ok = 1;
    while(ok){
        set<char> s;
        for(string x: words){
            s.insert(x[len]);
        }
        if(s.size() == 1)
            len++;
        else
            ok = 0;
    }
    return words[0].substr(0, len);
}