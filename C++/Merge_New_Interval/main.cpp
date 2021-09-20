//https://binarysearch.com/problems/Merge-New-Interval
vector<vector<int>> solve(vector<vector<int>>& intervals, vector<int>& target) {
    intervals.push_back(target);
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    int n = intervals.size();
    int start = intervals[0][0], end = intervals[0][1];
    for(int i = 1; i < n; i++){
        if(intervals[i][0] > end){
            ans.push_back({start, end});
            start = intervals[i][0];
            end = intervals[i][1];
        }
        end = max(end, intervals[i][1]);
    }
    ans.push_back({start, end});
    return ans;
}