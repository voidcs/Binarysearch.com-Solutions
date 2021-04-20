//https://binarysearch.com/problems/First-Fit-Room
import java.util.*;

class Solution {
    public int solve(int[] rooms, int target) {
        int n = rooms.length;
        for(int i = 0; i < n; i++){
            if(rooms[i] >= target)
                return rooms[i];
        }
        return -1;
    }
}