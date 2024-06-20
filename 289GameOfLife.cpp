class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int rows = board.size();
        int cols = board[0].size();
        vector<vector<int>> newBoard(rows + 2, vector<int>(cols + 2, 0));

        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= cols; ++j) {
                newBoard[i][j] = board[i - 1][j - 1];
            }
        }

        vector<vector<int>> nextBoard = newBoard;

        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= cols; ++j) {
                int liveNeighbors = newBoard[i - 1][j - 1] + newBoard[i - 1][j] + newBoard[i - 1][j + 1] +
                                    newBoard[i][j - 1] + newBoard[i][j + 1] +
                                    newBoard[i + 1][j - 1] + newBoard[i + 1][j] + newBoard[i + 1][j + 1];

                if (newBoard[i][j] == 1) {
                    if (liveNeighbors < 2 || liveNeighbors > 3) {
                        nextBoard[i][j] = 0;
                    } else {
                        nextBoard[i][j] = 1;
                    }
                } else {
                    if (liveNeighbors == 3) {
                        nextBoard[i][j] = 1;
                    } else {
                        nextBoard[i][j] = 0;
                    }
                }
            }
        }

        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= cols; ++j) {
                board[i - 1][j - 1] = nextBoard[i][j];
            }
        }

        cout << "[";
        for (int i = 0; i < rows; i++) {
            cout << "[";
            for (int j = 0; j < cols; j++) {
                cout << board[i][j];
                if (j != cols - 1) {
                    cout << ",";
                }
            }
            cout << "]";
            if (i != rows - 1) {
                cout << ",";
            }
        }
        cout << "]";
    }
};
