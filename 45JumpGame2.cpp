class Solution {
public:
    int jump(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i]+i<nums[i-1])
            nums[i]=nums[i-1];
            else
            nums[i]+=i;
        }
        int i=0,res=0;
        while(i<nums.size()-1){
            res++;
            i=nums[i];
        }
        return res;
    }
};