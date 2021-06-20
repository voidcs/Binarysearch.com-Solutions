//https://binarysearch.com/problems/123-Number-Flip
import java.util.*;

class Solution {
    public int solve(int n) {
        StringBuilder s = new StringBuilder(String.valueOf(n));
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) != '3'){
                s.setCharAt(i, '3');
                break;
            }
        }
        String ans = s.toString();
        return Integer.parseInt(ans);
    }
}