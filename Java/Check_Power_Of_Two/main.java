//https://binarysearch.com/problems/Check-Power-of-Two
import java.util.*;

class Solution {
    public boolean solve(int n) {
        if(n == 0)
            return false;
        return (n & n-1) == 0;
    }
}