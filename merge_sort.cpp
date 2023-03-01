class Solution {
public:
    void combine(int low, int mid, int high, vector<int>& v) {
        if (low >= high) return;
        int L = low, R = mid + 1, siz = high - low + 1, idx = 0;
        vector<int> sorted(siz, 0);
        while (L <= mid and R <= high) {
            if (v[L] < v[R]) sorted[idx++] = v[L++];
            else sorted[idx++] = v[R++];
        }
        while (L <= mid) sorted[idx++] = v[L++];
        while (R <= high) sorted[idx++] = v[R++];
        for (int i = 0; i < siz; i++) {
            v[low + i] = sorted[i];
        }
    }

    void partition(int L, int R, vector<int>& v) {
        if (L < R) {
            int mid = L + (R - L) / 2;
            partition(L, mid, v);
            partition(mid + 1, R, v);
            combine(L, mid, R, v);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        partition(0, nums.size() - 1, nums);
        return nums;
    }
};
