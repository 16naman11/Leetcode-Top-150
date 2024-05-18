/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int max=0,count=1,save=nums[0];
        if(n==1)
        return save;
        sort(nums.begin(), nums.end());
        for(int i=1;i<n;i++){
           if(nums[i]==nums[i-1]) {
                count++; 
            } 
            else{
                count=1;
            }
            if(count>n/2){
                save=nums[i];
            }
        }
        return save; 
    }
};