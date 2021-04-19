//https://binarysearch.com/problems/Partition-String
vector<int> solve(string s) {
    int n = s.length();
    map<char, int> end;
    vector<int> ans;

    for(int i = 'a'; i <= 'z'; i++){
        for(int j = n-1; j >= 0; j--){
            if(s[j] == i){
                end[i] = j;
                break;
            }
        }
    }
    set<char> have;
    for(int i = 0; i < n; i++){
        int cnt = 0, stop = 0;
        if(!have.count(s[i])){
            stop = max(stop, end[s[i]]);
            cnt++;
            while(i < n && i < stop){
                have.insert(s[i]);
                stop = max(stop, end[s[i]]);
                i++, cnt++;
            }
            ans.push_back(cnt);
        }
    }
    return ans;
}