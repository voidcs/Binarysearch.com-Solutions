//https://binarysearch.com/problems/Unique-Occurrences
bool solve(vector<int>& v) {
    map<int, int> m;
    for(int x: v){
        m[x]++;
    }
    set<int> s;
    for(auto x: m){
        s.insert(x.second);
    }
    return m.size() == s.size();
}