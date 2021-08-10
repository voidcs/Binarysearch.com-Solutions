//https://binarysearch.com/problems/Hit-Counter
class HitCounter {
    public:
    vector<int> times;
    HitCounter() {
        
    }

    void add(int timestamp) {
        times.push_back(timestamp);
    }

    int count(int timestamp) {
        int l = lower_bound(times.begin(), times.end(), timestamp - 60) - times.begin();
        int r = upper_bound(times.begin(), times.end(), timestamp) - times.begin();
        return max(0, r-l);
    }
};