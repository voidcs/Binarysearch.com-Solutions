//https://binarysearch.com/problems/In-Place-Move-Zeros-to-End-of-List
import java.util.*;

class Solution {
    public int[] solve(int[] nums) {
        int n = nums.length;
        int j = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                nums[j] = nums[i];
                j++;
            }
        }
        while(j < n)
            nums[j++] = 0;
        return nums;
    }
}