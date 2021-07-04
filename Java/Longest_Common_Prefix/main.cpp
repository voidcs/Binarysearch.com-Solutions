//https://binarysearch.com/problems/Longest-Common-Prefix
import java.util.*;

class Solution {
    public String solve(String[] words) {
        int len = 0;
        boolean ok = true;
        StringBuilder ans = new StringBuilder();
        while(ok){
            char c = '0';
            for(int i = 0; i < words.length; i++){
                if(words[i].length() <= len){
                    ok = false;
                    break;
                }
                if(c == '0')
                    c = words[i].charAt(len);
                else if(words[i].charAt(len) != c)
                    ok = false;
            }
            if(ok == true){
                ans.append(c);
                len++;
            }
        }
        return ans.toString();
    }
}