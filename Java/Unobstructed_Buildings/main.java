//https://binarysearch.com/problems/Unobstructed-Buildings
import java.util.*;

class Solution {
    public int[] solve(int[] v) {
        List<Integer> ans = new ArrayList<Integer>();
        int n = v.length;
        int highest = -1;
        for(int i = n-1; i >= 0; i--){
            if(v[i] > highest)
                ans.add(i);
            highest = Math.max(highest, v[i]);
        }
        int[] ans2 = new int[ans.size()];
        for(int i = 0; i < ans.size(); i++)
            ans2[i] = ans.get(i);
        Arrays.sort(ans2);
        return ans2;
    }
}