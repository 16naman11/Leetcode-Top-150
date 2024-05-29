#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        vector<int> left(n), right(n);
        int maxl = 0, maxr = 0;
        for (int i = 0; i < n; i++) {
            maxl = maxl > height[i] ? maxl : height[i];
            left[i] = maxl; 
        }
        for (int i = n - 1; i >= 0; i--) {
            maxr = maxr > height[i] ? maxr : height[i]; 
            right[i] = maxr; 
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            int water = left[i] < right[i] ? left[i] : right[i]; 
            count += water - height[i];
        }

        return count;
    }
};
