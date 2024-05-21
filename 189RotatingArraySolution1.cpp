class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        while(k--){
            int key=nums[n-1];
            for(int i=n-1;i>=1;i--){
                nums[i]=nums[i-1];
            }
            nums[0]=key;
        }   
    }
};