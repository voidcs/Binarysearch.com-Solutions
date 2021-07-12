//https://binarysearch.com/problems/IP-Address-Combinations
vector<string> solve(string ip) {
    vector<string> ans;
    int n = ip.length();
    for(int d1 = 1; d1 < n; d1++){
        for(int d2 = d1+1; d2 < n; d2++){
            for(int d3 = d2+1; d3 < n; d3++){
                vector<string> v;
                v.push_back(ip.substr(0, d1));
                v.push_back(ip.substr(d1, d2-d1));
                v.push_back(ip.substr(d2, d3-d2));
                v.push_back(ip.substr(d3, n-d3));
                bool ok = 1;
                for(string x: v){
                    if(x[0] == '0' && x.size() > 1)
                        ok = 0;
                    if(stoi(x) > 255)
                        ok = 0;
                }
                if(!ok)
                    continue;
                string s;
                for(int i = 0; i < 4; i++){
                    s += v[i];
                    if(i < 3)
                        s += '.';
                }
                ans.push_back(s);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}