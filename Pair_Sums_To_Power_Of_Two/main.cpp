//https://binarysearch.com/problems/Pair-Sums-to-Power-of-Two
int solve(vector<int>& v) {
    unordered_map<int, int> m;
    int n = v.size();
    unordered_set<int> powersOfTwo;
    for(int i = 0; i <= 30; i++){
        powersOfTwo.insert(1<<i);
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(auto x: powersOfTwo){
            int need = x - v[i];
            if(m.count(need)){
                ans += m[need];
            }
        }
        m[v[i]]++;
    }
    return ans;
}