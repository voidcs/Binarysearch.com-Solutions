//https://binarysearch.com/problems/Detect-Voter-Fraud
bool solve(vector<vector<int>>& votes) {
    set<int> s;
    int n = votes.size();
    for(int i = 0; i < n; i++){
        s.insert(votes[i][1]);
    }
    return s.size() != n;
}