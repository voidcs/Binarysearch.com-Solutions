import java.util.*;

class Solution {
    public boolean solve(int n) {
        int t = n, rev = 0;
        while(t > 0){
            rev = (rev * 10) + (t % 10);
            t /= 10;
        }
        boolean valid = true;
        while(n > 0){
            if(n%10 != rev % 10)
                valid = false;
            n /= 10;
            rev /= 10;
        }
        return valid;
    }
}