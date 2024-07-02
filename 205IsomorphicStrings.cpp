class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        int temp[128][2]; 
        memset(temp, -1, sizeof(temp));

        for (int i = 0; i < n; ++i) {
            int idx_s = s[i] ;
            int idx_t = t[i] ;

            if (temp[idx_s][0] == -1) {
                temp[idx_s][0] = idx_t;
            } else if (temp[idx_s][0] != idx_t) {
                return false;
            }

            if (temp[idx_t][1] == -1) {
                temp[idx_t][1] = idx_s;
            } else if (temp[idx_t][1] != idx_s) {
                return false;
            }
        }

        return true;
    }
};
