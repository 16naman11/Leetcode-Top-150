class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        vector<int> loc; 
        int count = 0;
        for (int i = 0; i < n; i++) {
            if ((i == 0 || s[i-1] == ' ') && s[i] != ' ') {
                loc.push_back(i);
                count++;
            }
        }
        string result;
        for (int i = count - 1; i >= 0; i--) {
            int start = loc[i];
            int end = (i == count - 1) ? n : loc[i + 1];
            for (int j = start; j < end && s[j] != ' '; j++) {
                result += s[j];
            }
            if (i > 0) 
            result += ' ';
        }
        
        return result;
    }
};
