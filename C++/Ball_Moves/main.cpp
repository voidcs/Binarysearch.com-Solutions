//https://binarysearch.com/problems/Ball-Moves
vector<int> solve(vector<int>& a) {
    int n = a.size(), rightDist = 0;
    int cnt = 0, passed = 0;
    int leftDist = 0;
    for(int i = 0; i < n; i++){
        if(a[i]){
            cnt++;
            rightDist += i;
        }
    }
    vector<int> ans;
    for(int i = 0; i < n; i++){
        ans.push_back(rightDist + leftDist);
        if(a[i])
            passed++;
        rightDist -= (cnt-passed);
        leftDist += passed;
    }
    return ans;
}