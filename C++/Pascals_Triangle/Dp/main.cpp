//https://binarysearch.com/problems/Pascal's-Triangle
vector<int> solve(int n) {
    vector<int> ans = {1};
    int len = 2;
    for(int i = 0; i < n; i++){
        vector<int> newRow(len);
        for(int j = 0; j < len; j++){
            if(j == 0 || j == len-1)
                newRow[j] = 1;
            else
                newRow[j] = ans[j-1] + ans[j];
        }
        ans = newRow;
        len++;
    }
    return ans;
}