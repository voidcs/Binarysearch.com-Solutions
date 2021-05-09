import java.util.*;

class Solution {
    public int solve(int[] nums) {
        int[] a = nums.clone();
        int ans = 0;
        Arrays.sort(a);
        for(int i = 0; i < nums.length; i++){
            if(nums[i] == a[i])
                ans++;
        }
        return ans;
    }
}