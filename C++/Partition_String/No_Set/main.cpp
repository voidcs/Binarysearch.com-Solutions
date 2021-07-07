//https://binarysearch.com/problems/Partition-String
vector<int> solve(string s) {
    map<char, int> last;
    int n = s.length();
    for(int i = 0; i < n; i++)
        last[s[i]] = i;
    vector<int> ans;
    int cnt = 1;
    for(int i = 0; i < n; i++){
        int j = last[s[i]];
        int cnt = 1;
        while(i < n && i != j){
            cnt++;
            i++;
            j = max(j, last[s[i]]);
        }
        ans.push_back(cnt);
    }
    return ans;
}