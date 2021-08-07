//https://binarysearch.com/problems/Verify-Max-Heap
import java.util.*;

class Solution {
    public boolean solve(int[] nums) {
        int n = nums.length;
        boolean ok = true;
        for(int i = 0; i < n; i++){
            if(2*i+1 < n && nums[2*i+1] > nums[i])
                ok = false;
            if(2*i+2 < n && nums[2*i+2] > nums[i])
                ok = false;
        }
        return ok;
    }
}