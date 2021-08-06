//https://binarysearch.com/problems/Largest-Number-By-Two-Times
import java.util.*;

class Solution {
    public boolean solve(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums);
        return nums[n-1] > nums[n-2]*2;
    }
}