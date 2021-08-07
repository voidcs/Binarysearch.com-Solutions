//https://binarysearch.com/problems/Minimum-Bracket-Addition
import java.util.*;

class Solution {
    public int solve(String s) {
        int n = s.length();
        int left = 0, right = 0;
        int bal = 0;
        for(char c: s.toCharArray()){
            if(c == '(')
                bal++;
            else
                bal--;
            left = Math.max(left, -bal);
        }
        bal = 0;
        for(int i = n-1; i >= 0; i--){
            char c = s.charAt(i);
            if(c == ')')
                bal++;
            else
                bal--;
            right = Math.max(right, -bal);
        }
        return left + right;
    }
}