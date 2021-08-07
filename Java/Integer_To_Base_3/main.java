//https://binarysearch.com/problems/Integer-to-Base-3
import java.util.*;

class Solution {
    public String solve(int n) {
        if(n == 0)
            return "0";
        StringBuilder ans = new StringBuilder();
        while(n > 0){
            ans.append((char)(n%3 + '0'));
            n /= 3;
        }
        ans = ans.reverse();
        return ans.toString();
    }
}