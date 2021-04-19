//https://binarysearch.com/problems/Word-Formation
int solve(vector<string>& words, string letters){
    int ans = 0;
    map<char, int> m;
    for(int i = 0; i < letters.length(); i++){
        m[letters[i]]++;
    }
    int n = words.size();
    for(int i = 0; i < n; i++){
        map<char, int> need;
        for(int j = 0; j < words[i].size(); j++){
            need[words[i][j]]++;
        }
        bool flag = 1;
        for(auto x: need){
            if(x.second > m[x.first])
                flag = 0;
        }
        if(flag)
            ans = max(ans, (int)words[i].size());
    }
    return ans;
}