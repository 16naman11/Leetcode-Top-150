class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if (matrix.empty()) return res;

        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int top = 0, bottom = rows - 1;
        int left = 0, right = cols - 1;

        while (top <= bottom && left <= right) {
            // Traverse from left to right on the current top row
            for (int b = left; b <= right; ++b) {
                res.push_back(matrix[top][b]);
            }
            ++top;

            // Traverse from top to bottom on the current right column
            for (int c = top; c <= bottom; ++c) {
                res.push_back(matrix[c][right]);
            }
            --right;

            // Traverse from right to left on the current bottom row (if still within bounds)
            if (top <= bottom) {
                for (int d = right; d >= left; --d) {
                    res.push_back(matrix[bottom][d]);
                }
                --bottom;
            }

            // Traverse from bottom to top on the current left column (if still within bounds)
            if (left <= right) {
                for (int e = bottom; e >= top; --e) {
                    res.push_back(matrix[e][left]);
                }
                ++left;
            }
        }

        return res;
    }
};
