//https://binarysearch.com/problems/Merging-Two-Sorted-Lists
import java.util.*;

class Solution {
    public int[] solve(int[] a, int[] b) {
        int ans[] = new int[a.length + b.length];
        int i = 0;
        for (i = 0; i < a.length; i++) {
            ans[i] = a[i];
        }
        for (int j = 0; j < b.length; j++) {
            ans[i++] = b[j];
        }
        Arrays.sort(ans);
        return ans;
    }
}
