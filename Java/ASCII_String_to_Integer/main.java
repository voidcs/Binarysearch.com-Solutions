import java.util.*;

class Solution {
    public int solve(String s) {
        int ans = 0;
        int n = s.length();
        for(int i = 0; i < n; i++){
            int j = i;
            String num = "";
            while(j < n && Character.isDigit(s.charAt(j))){
                num += s.charAt(j);
                j++;
            }
            i = j;
            if(num.length() > 0)
                ans += Integer.parseInt(num);
        }
        return ans;
    }
}