//https://binarysearch.com/problems/Repeated-Deletion-Sequel
string solve(string s, int k) {
    stack<array<int, 3>> stk;
    int n = s.length();
    vector<bool> vis(n);
    for(int i = 0; i < n; i++){
        int cnt = 1, j = i+1;
        auto valid = [&](){
            if(stk.empty())
                return false;
            if(stk.top()[0] == s[i]-'a' && cnt + stk.top()[1] == k)
                return true;
            return false;
        };
        while(j < n && s[j] == s[i] && !valid() && cnt < k){
            j++, cnt++;
        }
        if(valid()){
            for(int x = 0; x < stk.top()[1]; x++){
                vis[stk.top()[2] + x] = 1;
            }
            for(int x = i; x < j; x++)
                vis[x] = 1;
            stk.pop();
        }
        else if(cnt == k){
            for(int x = i; x < j; x++)
                vis[x] = 1;
        }
        else{
            stk.push({s[i]-'a', cnt, i});
        }
        i = j-1;
    }
    string ans;
    for(int i = 0; i < n; i++)
        if(!vis[i])
            ans += s[i];
    return ans;
}