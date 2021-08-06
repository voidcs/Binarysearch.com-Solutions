//https://binarysearch.com/problems/3-6-9
import java.util.*;

class Solution {
    public String[] solve(int n) {
        List<String> ans = new ArrayList<String>();
        for(int i = 1; i <= n; i++){
            boolean ok = false;
            if(i%3 == 0)
                ok = true;
            int x = i;
            while(x > 0){
                int d = x%10;
                if(d == 3 || d == 6 || d == 9)
                    ok = true;
                x /= 10;
            }
            if(ok)
                ans.add("clap");
            else
                ans.add(String.valueOf(i));
        }
        String[] res = ans.toArray(new String[0]);
        return res;
    }
}