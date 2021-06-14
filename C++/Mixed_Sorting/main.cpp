//https://binarysearch.com/problems/Mixed-Sorting
vector<int> solve(vector<int>& v) {
    vector<int> even, odd;
    int n = v.size();
    vector<int> evenIndices, oddIndices;
    for(int i = 0; i < n; i++){
        if(v[i]%2){
            odd.push_back(v[i]);
            oddIndices.push_back(i);
        }
        else{
            even.push_back(v[i]);
            evenIndices.push_back(i);
        }
    }
    sort(even.begin(), even.end());
    sort(odd.rbegin(), odd.rend());
    vector<int> ans(n);
    for(int i = 0; i < even.size(); i++){
        ans[evenIndices[i]] = even[i];
    }
    for(int i = 0; i < odd.size(); i++){
        ans[oddIndices[i]] = odd[i];
    }
    return ans;
}