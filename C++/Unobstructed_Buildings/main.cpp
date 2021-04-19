//https://binarysearch.com/problems/Unobstructed-Buildings
vector<int> solve(vector<int>& a) {
    int n = a.size();
    vector<int> ans;
    int maxSoFar = -1;
    for(int i = n-1; i >= 0; i--){
        if(a[i] > maxSoFar){
            ans.push_back(i);
        }
        maxSoFar = max(maxSoFar, a[i]);
    }
    sort(ans.begin(), ans.end());
    return ans;
}