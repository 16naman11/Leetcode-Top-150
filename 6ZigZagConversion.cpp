class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.length() == 1) {
            return s;
        }
        
        int n = s.length();
        vector<vector<char>> mat(numRows, vector<char>(n, ' '));
        int row = 0, col = 0;
        bool goingDown = true;
        
        for (int i = 0; i < n; i++) {
            mat[row][col] = s[i];
            if (goingDown) {
                if (row == numRows - 1) {
                    goingDown = false;
                    row--;
                    col++;
                } else {
                    row++;
                }
            } else {
                if (row == 0) {
                    goingDown = true;
                    row++;
                } else {
                    row--;
                    col++;
                }
            }
        }
        
        string result;
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] != ' ') {
                    result += mat[i][j];
                }
            }
        }
        
        return result;
    }
};
