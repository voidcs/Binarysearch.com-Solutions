//https://binarysearch.com/problems/Intervals-Intersecting-at-Point
int solve(vector<vector<int>>& intervals, int point) {
    int ans = 0;
    for(int i = 0; i < intervals.size(); i++){
        if(intervals[i][0] <= point && point <= intervals[i][1])
            ans++;
    }
    return ans;
}