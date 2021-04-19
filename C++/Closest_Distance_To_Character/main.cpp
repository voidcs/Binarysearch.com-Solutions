//https://binarysearch.com/problems/Closest-Distance-to-Character
vector<int> solve(string s, string c) {
    int n = s.length();
    vector<int> ans(n);
    vector<int> locations;
    for(int i = 0; i < n; i++){
        if(s[i] == c[0])
            locations.push_back(i);
    }
    
    for(int i = 0; i < n; i++){
        vector<int>::iterator r = lower_bound(locations.begin(), locations.end(), i);
        int x = 1e9;
        if(r != locations.end())
            x = min(x, *r - i);
        if(r != locations.begin())
            x = min(x, i - *prev(r));
        ans[i] = x;
    }
    return ans;
}