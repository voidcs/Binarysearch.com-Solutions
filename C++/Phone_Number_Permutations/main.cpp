//https://binarysearch.com/problems/Phone-Number-Permutations
vector<string> solve(string digits) {
    map<int, string> m;
    string alpha;
    for(int i = 0; i <= 26; i++)
        alpha += 'a' + i;
    for(int i = 2, j = 0; i <= 9; i++){
        int len = 3 + (i == 7 || i == 9);
        m[i] = alpha.substr(j, len);
        j += len;
    }
    
    vector<string> ans;
    function<void(int, string)> create = [&](int n, string s){
        if(n == digits.size()){
            ans.push_back(s);
            return;
        }
        char c = digits[n] - '0';
        for(int i = 0; i < m[c].length(); i++){
            create(n+1, s + m[c][i]);
        }
    };
    create(0, "");
    return ans;
}