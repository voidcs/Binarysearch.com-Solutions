//https://binarysearch.com/problems/Furthest-From-Origin
import java.util.*;

class Solution {
    public int solve(String s) {
        int add = 0, cnt = 0;
        for(char c: s.toCharArray()){
            if(c == 'L')
                cnt--;
            else if(c == 'R')
                cnt++;
            else
                add++;
        }
        return Math.abs(cnt) + add;
    }
}