//https://binarysearch.com/problems/Sliding-Window-Product
class SlidingWindowProduct {
    public:
    vector<int> p;
    int prod;
    int last = -1;
    SlidingWindowProduct() {
        prod = 1;
        p.push_back(1);
    }

    void add(int num) {
        if(num == 0){
            last = p.size();
        }
        else
            prod *= num;
        p.push_back(prod);
    }

    int product(int k) {
        int n = p.size() - 1;
        if(last > n - k)
            return 0;
        return p[n] / p[n-k];
    }
};