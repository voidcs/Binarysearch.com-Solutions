//https://binarysearch.com/problems/Swap-Consecutive-Index-Pairs
import java.util.*;

class Solution {
    public int[] solve(int[] nums){
        int n = nums.length;
        for(int i = 0; i+2 < n; i += 4){
            int temp = nums[i];
            nums[i] = nums[i+2];
            nums[i+2] = temp;
        }
        for(int i = 1; i+2 < n; i += 4){
            int temp = nums[i];
            nums[i] = nums[i+2];
            nums[i+2] = temp;
        }
        return nums;
    }
}