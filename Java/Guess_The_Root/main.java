//https://binarysearch.com/problems/Guess-the-Root
import java.util.*;

class Solution {
    public int solve(int n) {
        long l = 0, r = (long)1e10;
        int ans = -1;
        while(l <= r){
            long mid = (l+r) / 2;
            if(mid*mid <= n){
                ans = (int)mid;
                l = mid+1;
            }
            else
                r = mid-1;
        }
        return ans;
    }
}