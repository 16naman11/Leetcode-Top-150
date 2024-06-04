class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1 = haystack.length();
        int n2 = needle.length();
        
        if (n2 == 0) return 0; 
        for (int start = 0; start <= n1 - n2; start++) {
            int j = 0;
            while (j < n2 && haystack[start + j] == needle[j]) {
                j++;
            }
            if (j == n2) return start;
        }
        
        return -1; 
    }
};
