//https://binarysearch.com/problems/Interval-Intersection
vector<int> solve(vector<vector<int>>& intervals) {
    int l = -1, r = INT_MAX;
    for(int i = 0; i < intervals.size(); i++){
        l = max(l, intervals[i][0]);
        r = min(r, intervals[i][1]);
    }
    return {l ,r};
}