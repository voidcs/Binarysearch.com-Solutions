//https://binarysearch.com/problems/Large-to-Small-Sort
import java.util.*;

class Solution {
    public int[] solve(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        int[] ans = new int[n];
        int l = 0, r = n-1;
        for(int i = 0; i < n; i++){
            if(i%2 == 0)
                ans[i] = nums[r--];
            else
                ans[i] = nums[l++];
        }
        return ans;
    }
}