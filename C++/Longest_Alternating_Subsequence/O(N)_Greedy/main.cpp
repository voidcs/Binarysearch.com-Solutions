//https://binarysearch.com/problems/Longest-Alternating-Subsequence
int solve(vector<int>& v) {
    int n = v.size();
    int up = 1, down = 1;
    for(int i = 1; i < n; i++){
        if(v[i] > v[i-1])
            up = down + 1;
        else if(v[i] < v[i-1])
            down = up + 1;
    }
    return n <= 1 ? n : max(up, down);
}