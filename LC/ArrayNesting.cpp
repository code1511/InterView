// question link
// https://leetcode.com/problems/array-nesting/
class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int ans=1;
        for(int i=0;i<nums.size();i++){
            int ind=i;
            int c=0;
            while(nums[ind]>=0){
                int index=nums[ind];
                nums[ind]=-1;
                ind=index;
                c++;
            }
            ans=max(ans,c);
        }
        return ans;
    }
};
