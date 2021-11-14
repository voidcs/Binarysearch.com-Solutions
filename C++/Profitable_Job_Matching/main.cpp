//https://binarysearch.com/problems/Profitable-Job-Matching
int solve(vector<int>& people, vector<int>& jobs, vector<int>& profits) {
    sort(people.begin(), people.end());
    vector<array<int, 2>> v;
    int n = jobs.size();
    for(int i = 0; i < n; i++){
        v.push_back({jobs[i], profits[i]});
    }
    sort(v.begin(), v.end());
    int gain = 0, ans = 0;
    int i = 0;
    for(int x: people){
        while(i < n && v[i][0] <= x){
            gain = max(gain, v[i++][1]);
        }
        ans += gain;
    }
    return ans;
}