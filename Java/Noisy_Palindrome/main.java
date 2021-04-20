//https://binarysearch.com/problems/Noisy-Palindrome
import java.util.*;

class Solution {
    public boolean solve(String s) {
        int n = s.length();
        StringBuilder t = new StringBuilder();
        for(int i = 0; i < n; i++){
            char c = s.charAt(i);
            if(Character.isLowerCase(c))
                t.append(c);
        }
        StringBuilder temp = new StringBuilder();
        temp.append(t);
        String y = temp.toString();
        temp.reverse();
        String x = temp.toString();
        return x.equals(y);
    }
}