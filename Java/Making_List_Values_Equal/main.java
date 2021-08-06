//https://binarysearch.com/problems/Making-List-Values-Equal
import java.util.*;

class Solution {
    public int solve(int[] nums) {
        int ans = 0;
        Arrays.sort(nums);
        for(int i = nums.length-1; i >= 1; i--){
            ans += nums[i] - nums[i-1];
        }
        return ans;
    }
}