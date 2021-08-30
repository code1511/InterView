// https://leetcode.com/problems/arithmetic-slices/
// question link
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3) return 0;
//         if array size is less than 3 then it's not possible to form any arithmetic subarray
//        because An integer array is called arithmetic if it consists of at least three elements 
        
        
        int n=nums.size();
//         n is the size of the array
        vector<int>dp(n+1,0);
        
        //checking if first three elements of the array are forming an arithmetic subarray or not
        if(nums[2]-nums[1]==nums[1]-nums[0])
            dp[2]=1;
 /*     
     storing dp[2] in count because if first three elements are not in arithmetic order 
         then dp[2]==0
        in that case count will be zero for first three elements
        
        c is the count of the subarray that we can form using the elements of the given array
        */
        int c=dp[2];
        for(int i=3;i<nums.size();i++){
            
           if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]){
               dp[i]=dp[i-1]+1;
           }
            c+=dp[i];
        }
        return c;
    }
};

// https://leetcode.com/problems/arithmetic-slices/discuss/1434232/C%2B%2B-solution-with-explanation-oror-DP-Approach
