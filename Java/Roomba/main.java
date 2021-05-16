import java.util.*;

class Solution {
    public boolean solve(String[] moves, int x, int y) {
        int currX = 0;
        int currY = 0;
        for(int i = 0; i < moves.length; i++){
            if(moves[i].equals("NORTH"))
                currY++;
            if(moves[i].equals("SOUTH"))
                currY--;
            if(moves[i].equals("EAST"))
                currX++;
            if(moves[i].equals("WEST"))
                currX--;
        }
        if(x == currX && y == currY)
            return true;
        return false;
    }
}