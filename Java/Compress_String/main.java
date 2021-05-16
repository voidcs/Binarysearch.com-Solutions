import java.util.*;

class Solution {
    public String solve(String s) {
        String ans = "";
        for(int i = 0; i < s.length(); i++){
            char c = s.charAt(i);
            while(i < s.length() && s.charAt(i) == c){
                i++;
            }
            ans += c;
            i--;
        }
        return ans;
    }
}