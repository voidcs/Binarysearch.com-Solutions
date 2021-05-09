//https://binarysearch.com/problems/Palindromic-Integer
import java.util.*;

class Solution {
    public boolean solve(int num) {
        int temp = num;
        int reverse = 0;
        while(num){
            reverse = reverse*10 + (num%10);
            num /= 10;
        }
        return temp == reverse;
    }
}