class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum=0,temp=n,flag=0;
        for(int i=0;i<n;i++){
            sum=0;
            int count=0; // Reset count to 0 for each iteration
            for(int j=i;j<n;j++){
                sum+=nums[j];
                count++;
                if(sum>=target){
                    flag=1;
                    break;
                }
            }
            if(count<temp)
            temp=count;
        }
        if(flag)
        return temp;
        return 0;
        
    }
};
