//https://binarysearch.com/problems/Reverse-Sublists-to-Convert-to-Target
import java.util.*;

class Solution {
    public boolean solve(int[] nums, int[] target) {
        HashMap<Integer, Integer> a = new HashMap<>();
        HashMap<Integer, Integer> b = new HashMap<>();
        for(int x: nums){
            a.merge(x, 1, Integer::sum);
        }
        for(int x: target){
            b.merge(x, 1, Integer::sum);
        }
        return a.equals(b);
    }
}