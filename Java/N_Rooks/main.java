//https://binarysearch.com/problems/N-Rooks
import java.util.*;

class Solution {
    public int solve(int n) {
        int ans = 1;
        for(int i = 1; i <= n; i++)
            ans *= i;
        return ans;
    }
}