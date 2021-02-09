//https://binarysearch.com/problems/Latin-Square
bool solve(vector<vector<string>>& matrix) {
    bool valid = 1;
    int n = matrix.size();
    set<string> s;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            s.insert(matrix[i][j]);
        }
    }
    valid &= (s.size() == n);
    for(int i = 0; i < n; i++){
        set<string> s;
        for(int j = 0; j < n; j++){
            s.insert(matrix[i][j]);
        }
        valid &= (s.size() == n);
    }
    for(int i = 0; i < n; i++){
        set<string> s;
        for(int j = 0; j < n; j++){
            s.insert(matrix[j][i]);
        }
        valid &= (s.size() == n);
    }
    return valid;
}