//https://binarysearch.com/problems/Zipped-Iterator
import java.util.*;

class ZippedIterator {
    private int[] x;
    private int[] y;
    private int flip, i, j;
    public ZippedIterator(int[] a, int[] b) {
        x = a;
        y = b;
        flip = 0;
        i = 0;
        j = 0;
    }

    public int next() {
        flip++;
        if(flip%2 == 1){
            if(i < x.length)
                return x[i++];
            return y[j++];
        }
        else{
            if(j < y.length)   
                return y[j++];
            return x[i++];
        }
    }

    public boolean hasnext() {
        return i < x.length || j < y.length;
    }
}