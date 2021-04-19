//https://binarysearch.com/problems/Submajority-Vote
vector<int> solve(vector<int>& a) {
    map<int, int> m;
    int n = a.size();
    for(int i = 0; i < n; i++){
        m[a[i]]++;
    }
    vector<int> ans;
    for(auto x: m){
        if(x.second > n/3)
            ans.push_back(x.first);
    }
    return ans;
}