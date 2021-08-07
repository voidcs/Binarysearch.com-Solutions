//https://binarysearch.com/problems/Just-Average
import java.util.*;

class Solution {
    public boolean solve(int[] nums, int k) {
        int n = nums.length;
        boolean ans = false;
        int sum = 0;
        for(int x: nums)
            sum += x;
        for(int x: nums){
            if((sum-x) % (n-1) == 0 && (sum-x)/(n-1) == k)
                ans = true;
        }
        return ans;
    }
}