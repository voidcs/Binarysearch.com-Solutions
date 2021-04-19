//https://binarysearch.com/problems/Stack-Sequence
bool solve(vector<int>& pushes, vector<int>& pops) {
    stack<int> s;
    int n = pushes.size(), m = pops.size();
    int i = 0, j = 0;
    while(i < n && j < m){
        while(s.empty() || (i < n && s.top() != pops[j])){
            s.push(pushes[i]);
            i++;
        }
        while(!s.empty() && j < m && pops[j] == s.top()){
            j++;
            s.pop();
        }
    }
    bool ans = 1;
    if(s.size() == 0 && i == n && j == m)
        ans = 1;
    else
        ans = 0;
        
    return ans;
}