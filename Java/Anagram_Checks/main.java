//https://binarysearch.com/problems/Anagram-Checks
import java.util.*;

class Solution {
    public boolean solve(String a, String b) {
        char x[] = a.toCharArray();
        char y[] = b.toCharArray();
        Arrays.sort(x);
        Arrays.sort(y);
        if(x.length != y.length)
            return false;
        boolean valid = true;
        for(int i = 0; i < x.length; i++){
            if(x[i] != y[i])
                valid = false;
        }
        return valid;
    }
}