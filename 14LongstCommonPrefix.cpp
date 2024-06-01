#include <vector>
#include <string>
#include <algorithm> // for std::sort
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end(), [](const string& a, const string& b) {
            return a.length() < b.length();
        });

        
        string result;
        int n = strs.size();
        int maxLength = strs[0].length();

        for (int i = 0; i < maxLength; ++i) {
            char currentChar = strs[0][i];
            int j;
            for (j = 1; j < n; ++j) {
                if (strs[j][i] != currentChar)
                    break;
            }
            if (j < n)
                break; 
            result += currentChar; 
        }

        return result;
    }
};
