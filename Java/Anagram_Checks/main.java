//https://binarysearch.com/problems/Anagram-Checks
import java.util.*;

class Solution {
    public boolean solve(String s0, String s1) {
        char[] temp = s0.toCharArray();
        char[] a = s0.toCharArray();
        char[] b = s1.toCharArray();
        Arrays.sort(a);
        Arrays.sort(b);
        return new String(a).equals(new String(b));
    }
}