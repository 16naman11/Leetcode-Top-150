class Solution {
public:
    vector<string> fullJustify(const vector<string>& words, int maxWidth) {
        vector<string> justifiedLines;
        int N = words.size();
        int i = 0, j = 0;
        int counter = 0;
        
        while (i < N && j < N) {
            int len = words[j].length();
            counter += len;
            if (counter + (j - i) > maxWidth) {
                counter -= len;
                justifiedLines.push_back(getline(words, i, j - 1, counter, maxWidth));
                i = j;
                counter = 0;
            } else {
                j++;
            }
        }
        
        // Handle the last line
        if (counter) {
            string last = words[i];
            for (int x = i + 1; x < j; x++) {
                last += " " + words[x];
            }
            last += getSpaces(maxWidth - last.size());
            justifiedLines.push_back(last);
        }
        
        return justifiedLines;
    }
    
private:
    string getSpaces(int n) {
        return string(n, ' ');
    }
    
    string getline(const vector<string>& words, int start, int end, int letterCount, int maxWidth) {
        string res = words[start];
        int spaces = maxWidth - letterCount;
        
        if (start == end) {
            res += getSpaces(spaces);
            return res;
        }
        
        int numOfSpace = spaces / (end - start);
        int extraOne = spaces % (end - start);
        string space0 = getSpaces(numOfSpace);
        string space1 = space0 + " ";
        
        for (int i = 0; i < end - start; i++) {
            res += (i < extraOne ? space1 : space0) + words[start + 1 + i];
        }
        
        return res;
    }
};
