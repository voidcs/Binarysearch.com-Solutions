//https://binarysearch.com/problems/Nth-Fibonacci-Number
import java.util.*;

class Solution {
    public int solve(int n) {
        int[] ans = new int[n];
        if(n <= 2)
            return 1;
        ans[0] = 1;
        ans[1] = 1;
        for(int i = 2; i < n; i++)
            ans[i] = ans[i-1] + ans[i-2];
        return ans[n-1];
    }
}