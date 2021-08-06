//https://binarysearch.com/problems/Transpose-of-a-Matrix
import java.util.*;

class Solution {
    public int[][] solve(int[][] matrix) {
        int n = matrix.length;
        int[][] ans = new int[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                ans[j][i] = matrix[i][j];
            }
        }
        return ans;
    }
}