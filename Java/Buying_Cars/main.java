import java.util.*;

class Solution {
    public int solve(int[] prices, int k) {
        Arrays.sort(prices);
        int ans = 0;
        for(int i = 0; i < prices.length; i++){
            if(k >= prices[i]){
                ans++;
                k -= prices[i];
            }
        }
        return ans;
    }
}