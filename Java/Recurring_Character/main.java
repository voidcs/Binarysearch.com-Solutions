//https://binarysearch.com/problems/Recurring-Character
import java.util.*;

class Solution {
    public int solve(String s) {
        int[] cnt = new int[26];
        for(int i = 0; i < s.length(); i++){
            int j = s.charAt(i) - 'a';
            if(cnt[j] > 0)
                return i;
            cnt[j]++;
        }
        return -1;
    }
}