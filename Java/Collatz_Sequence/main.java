//https://binarysearch.com/problems/Collatz-Sequence
import java.util.*;

class Solution {
    public int solve(int n) {
        int ans = 1;
        while(n != 1){
            ans++;
            if(n%2 == 0)
                n /= 2;
            else
                n = 3*n+1;
        }
        return ans;
    }
}