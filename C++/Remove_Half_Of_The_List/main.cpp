//https://binarysearch.com/problems/Remove-Half-of-the-List
int solve(vector<int>& v) {
    map<int, int> m;
    for(int x: v)
        m[x]++;
    vector<array<int, 2>> order;
    for(auto x: m){
        order.push_back({x.second, x.first});
    }
    sort(order.rbegin(), order.rend());
    int r = 0;
    int i = 0;
    set<int> removed;
    int cnt = 0;
    while(r < (v.size()+1)/2){
        cnt++;
        r += order[i][0];
        removed.insert(order[i][1]);
        i++;
    }
    vector<int> ans;
    for(int i = 0; i < v.size(); i++){
        if(!removed.count(v[i]))
            ans.push_back(v[i]);
    }
    return cnt;
}