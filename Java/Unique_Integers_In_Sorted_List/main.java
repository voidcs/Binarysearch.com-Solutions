//https://binarysearch.com/problems/Unique-Integers-in-Sorted-List
import java.util.*;

class Solution {
    public int solve(int[] nums) {
        HashSet<Integer> ans = new HashSet<Integer>();
        for(int x: nums)
            ans.add(x);
        return ans.size();
    }
}