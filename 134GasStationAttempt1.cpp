class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int flag = 0, i;

        for (i = 0; i < n; i++) {
            int start = 0;
            int j = n;
            vector<int> gasRotated = gas;
            vector<int> costRotated = cost;
            rotate(gasRotated.begin(), gasRotated.begin() + i, gasRotated.end());
            rotate(costRotated.begin(), costRotated.begin() + i, costRotated.end());
            while (j--) {
                start += gasRotated[n - j - 1] - costRotated[n - j - 1];
                if (start < 0)
                    break;
            }
            if (start >= 0) {
                flag = 1;
                break;
            }
        }
        if (flag)
            return i;
        else
            return -1;
    }
};
