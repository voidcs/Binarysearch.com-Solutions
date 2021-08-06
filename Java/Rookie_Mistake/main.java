//https://binarysearch.com/problems/Rookie-Mistake
import java.util.*;

class Solution {
    public boolean solve(String s) {
        int start = -1;
        int n = s.length();
        for(int i = 0; i < n; i++){
            if(s.charAt(i) == 'R'){
                start = i;
                break;
            }
        }
        int l = start, r = start;
        while(l >= 0 && s.charAt(l) != 'B')
            l--;
        while(r < n && s.charAt(r) != 'B')
            r++;
        return (l == -1 || r == n);
    }
}