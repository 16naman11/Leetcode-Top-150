class Solution {
public:
    bool isPalindrome(string s) {
        string result;
        int n=s.length();
        for(char c : s) {
            if (std::isalnum(c)) {
                result += std::tolower(c);
            }
        }
        n=result.length();
        string *s1, *s2;
        for(int i=0;i<n/2;i++){
           if(result[i]!=result[n-i-1])
           return false;
        }
        return true;  
    }
   
};