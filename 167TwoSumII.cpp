class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int> ans(2);
        int l=0,r=n-1;
        while(r>l){
            if(numbers[l]+numbers[r]==target){
                ans[0]=l+1;
                ans[1]=r+1;
                break;
            }
            else if(numbers[l]+numbers[r]<target)
            l++;
            else
            r--;
        }
        return ans;  
    }
};
