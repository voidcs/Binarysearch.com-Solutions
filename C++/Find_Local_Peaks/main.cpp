//https://binarysearch.com/problems/Find-Local-Peaks
vector<int> solve(vector<int>& v) {
    bool valid = 0;
    vector<int> ans;
    int n = v.size();
    for(int i = 0; i < n; i++){
        if(i == 0){
            if(i+1 < n && v[i] > v[i+1])
                ans.push_back(i);
        }
        else if(i == n-1){
            if(i-1 >= 0 && v[i] > v[i-1])
                ans.push_back(i);
        }
        else{
            if(v[i] > v[i-1] && v[i] > v[i+1])
                ans.push_back(i);
        }
    }
    return ans;
}