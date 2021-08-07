//https://binarysearch.com/problems/Append-List-to-Sum-Target
import java.util.*;

class Solution {
    public int solve(int[] nums, int k, int target) {
        int sum = 0;
        for(int x: nums)
            sum += x;
        return (Math.abs(target - sum) + k - 1) / k;
    }
}