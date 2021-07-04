//https://binarysearch.com/problems/Greatest-Common-Divisor
import java.util.*;

class Solution {
    int gcd(int a, int b){
        if(b == 0)
            return a;
        return gcd(b, a%b);
    }
    public int solve(int[] nums) {
        int ans = nums[0];
        for(int i = 1; i < nums.length; i++)
            ans = gcd(ans, nums[i]);
        return ans;
    }
}