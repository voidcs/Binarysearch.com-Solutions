//https://binarysearch.com/problems/Unique-Ab-Strings
import java.util.*;

class Solution {
    public int solve(String s) {
        int ans = 1;
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) == 'a')
                ans *= 2;
        }
        return ans;
    }
}