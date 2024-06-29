class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(magazine.begin(), magazine.end());
        int len1 = magazine.length();
        sort(ransomNote.begin(), ransomNote.end());
        int len2 = ransomNote.length();
        int i=0,j=0; 
        while(i!=len1){
            if(magazine[i]==ransomNote[j])
            j++;
            else if(magazine[i]>ransomNote[j])
            return false;
            if(j==len2)
            return true;
            i++;
        }
        return false;
        
    }
};