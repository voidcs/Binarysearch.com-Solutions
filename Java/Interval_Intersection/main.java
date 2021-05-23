//https://binarysearch.com/problems/Interval-Intersection
import java.util.*;

class Solution {
    public int[] solve(int[][] intervals) {
        int l = 0, r = Integer.MAX_VALUE;
        for(int i = 0; i < intervals.length; i++){
            l = Math.max(l, intervals[i][0]);
            r = Math.min(r, intervals[i][1]);
        }
        int ans[] = {l, r};
        return ans;
    }
}