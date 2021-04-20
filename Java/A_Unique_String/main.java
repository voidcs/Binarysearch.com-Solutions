//https://binarysearch.com/problems/A-Unique-String
import java.util.*;

class Solution {
    public boolean solve(String s) {
        Set<Character> a = new HashSet<Character>();
        for(char c: s.toCharArray())
            a.add(c);
        return a.size() == s.length();
    }
}