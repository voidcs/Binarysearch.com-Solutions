//https://binarysearch.com/problems/City-Blocks
int solve(vector<vector<string>>& matrix, vector<string>& blocks){
    map<string, array<int, 2>> coor;
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            coor[matrix[i][j]] = {i, j};
        }
    }
    int ans = 0;

    for(int i = 0; i < blocks.size(); i++){
        if(i == 0){
            ans += abs(coor[blocks[i]][0]);
            ans += abs(coor[blocks[i]][1]);
            continue;
        }
        ans += abs(coor[blocks[i]][0] - coor[blocks[i-1]][0]);
        ans += abs(coor[blocks[i]][1] - coor[blocks[i-1]][1]);
    }
    return ans;
}