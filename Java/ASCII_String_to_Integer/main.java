//https://binarysearch.com/problems/ASCII-String-to-Integer
import java.util.*;

class Solution {
    public int solve(String s) {
        int n = s.length();
        int ans = 0;
        for(int i = 0; i < n; i++){
            char c = s.charAt(i);
            int add = 0;
            while(i < n && Character.isDigit(s.charAt(i))){
                add = (add * 10) + (s.charAt(i) - '0');
                i++;
            }
            ans += add;
        }
        return ans;
    }
}