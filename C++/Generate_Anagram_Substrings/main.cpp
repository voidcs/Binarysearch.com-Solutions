//https://binarysearch.com/problems/Generate-Anagram-Substrings
vector<string> solve(string s) {
    map<string, vector<string>> m;
    vector<string> ans;
    for(int i = 0; i < s.length(); i++){
        for(int j = i; j < s.length(); j++){
            string str = s.substr(i, j-i+1);
            string a = str;
            sort(a.begin(), a.end());
            m[a].push_back(str);
        }
    }
    for(auto x: m){
        vector<string> v = x.second;
        if(v.size() > 1){
            for(auto x: v)
                ans.push_back(x);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}