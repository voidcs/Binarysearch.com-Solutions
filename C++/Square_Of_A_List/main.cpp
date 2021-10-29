//https://binarysearch.com/problems/Square-of-a-List
vector<int> solve(vector<int>& v) {
    int n = v.size();
    int l = 0, r = n-1;
    vector<int> ans;
    while(l <= r){
        if(abs(v[l]) >= abs(v[r])){
            ans.push_back(v[l]*v[l]);
            l++;
        }
        else{
            ans.push_back(v[r]*v[r]);
            r--;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}