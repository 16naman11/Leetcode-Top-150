class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int totalGas = 0, currentGas = 0, start = 0;

        for (int i = 0; i < n; i++) {
            totalGas += gas[i] - cost[i];
            currentGas += gas[i] - cost[i];

            if (currentGas < 0) {
                currentGas = 0;
                start = i + 1;
            }
        }
        if (totalGas < 0) {
            return -1;
        }

        return start;
    }
};
      
