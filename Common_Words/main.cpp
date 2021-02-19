//https://binarysearch.com/problems/Common-Words
int solve(string s0, string s1) {
    set<string> s;
    set<string> v1, v2;
    for(int i = 0; i < s0.size(); i++){
        string word;
        while(isalpha(s0[i])){
            word += tolower(s0[i]);
            i++;
        }
        v1.insert(word);
    }
    for(int i = 0; i < s1.size(); i++){
        string word;
        while(isalpha(s1[i])){
            word += tolower(s1[i]);
            i++;
        }
        v2.insert(word);
    }

    int ans = 0;
    for(auto x: v1){
        if(v2.count(x))
            ans++;
    }
    return ans;
}