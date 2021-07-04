//https://binarysearch.com/problems/Hamming-Distance
import java.util.*;

class Solution {
    public int solve(int x, int y) {
        int ans = 0;
        while(x > 0 || y > 0){
            if(x%2 != y%2)
                ans++;
            x /= 2; 
            y /= 2;
        }
        return ans;
    }
}