//https://binarysearch.com/problems/K-Lexicographically-Smallest-Subsequence
vector<int> solve(vector<int>& v, int k) {
    int n = v.size();
    vector<vector<array<int, 2>>> st(30, vector<array<int, 2>>(n));
    for(int i = 0; i < n; i++)
        st[0][i] = {v[i], i};
    for(int i = 1; i < 30; i++){
        for(int j = 0; j < n; j++){
            int r = j + (1<<(i-1));
            if(r < n){
                st[i][j][0] = min(st[i-1][j][0], st[i-1][r][0]);
                if(st[i-1][j][0] <= st[i-1][r][0])
                    st[i][j][1] = st[i-1][j][1];
                else
                    st[i][j][1] = st[i-1][r][1];
            }
        }
    }
    vector<int> ans;
    int l = 0, r = n - k;
    for(int i = 0; i < k; i++){
        int d = log2(r-l+1);
        int x, index;
        if(st[d][l][0] <= st[d][r-(1<<d)+1][0]){
            x = st[d][l][0];
            index = st[d][l][1];
        }
        else{
            x = st[d][r-(1<<d)+1][0];
            index = st[d][r-(1<<d)+1][1];
        }
        ans.push_back(x);
        l = index+1;
        r = max(r+1, l);
    }
    return ans;
}