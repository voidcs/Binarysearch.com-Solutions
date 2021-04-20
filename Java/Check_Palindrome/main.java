//https://binarysearch.com/problems/Check-Palindrome
import java.util.*;

class Solution {
    public boolean solve(String s) {
        StringBuilder t = new StringBuilder(s);
        return t.reverse().toString().equals(s);
    }
}