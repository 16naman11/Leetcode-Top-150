class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n - 1;
        int vol = 0;
        
        while (r > l) {
            int temp = min(height[l], height[r]) * (r - l);
            
            if (temp > vol) {
                vol = temp;
            }
            
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        
        return vol;
    }
};
