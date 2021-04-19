//https://binarysearch.com/problems/Matrix-Prefix-Sum
vector<vector<int>> solve(vector<vector<int>>& a){
    if(a.empty() || a[0].empty())
        return a;
    int n = a.size();
    int m = a[0].size();
    vector<vector<int>> ans(n, vector<int>(m));
    int sum = 0;
    //Set row = 0 && col = 0 as base case
    for(int i = 0; i < m; i++){
        sum += a[0][i];
        ans[0][i] = sum;
    }
    sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i][0];
        ans[i][0] = sum;
    }

    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            if(ans[i][j] == 0){
                ans[i][j] += ans[i-1][j] + ans[i][j-1];
                ans[i][j] += a[i][j];
                ans[i][j] -= ans[i-1][j-1];
            }
        }
    }
    return ans;
}