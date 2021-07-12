//https://binarysearch.com/problems/IP-Address-Combinations
vector<string> solve(string ip) {
    vector<string> ans;
    int n = ip.length();
    function<void(string, int, int)> gen = [&](string s, int index, int dots){
        if(index >= n){
            if(dots == 4)
                ans.push_back(s);
            return;
        }
        string t;
        for(int i = 0; i <= min(n-index-1, 3); i++){
            t += ip[index+i];
            if(stoi(t) <= 255){
                if(t[0] == '0' && i)
                    break;
                if(index)
                    gen(s + "." + t, index+i+1, dots+1);
                else
                    gen(t, index+i+1, dots+1);
            }
        }
    };
    gen("", 0, 0);
    return ans;
}