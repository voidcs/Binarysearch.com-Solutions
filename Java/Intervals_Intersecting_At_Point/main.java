//https://binarysearch.com/problems/Intervals-Intersecting-at-Point
import java.util.*;

class Solution {
    public int solve(int[][] intervals, int point) {
        int ans = 0;
        for(int i = 0; i < intervals.length; i++){
            if(point >= intervals[i][0] && point <= intervals[i][1])
                ans++;
        }
        return ans;
    }
}