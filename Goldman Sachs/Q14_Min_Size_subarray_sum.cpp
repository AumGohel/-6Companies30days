class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result=INT_MAX;
        int n=nums.size();
        int cumSum=0;
        int left=0;
        for(int i=0;i<n;i++){
            cumSum+=nums[i];
            
            while(cumSum>=target){
                result=min(result,i+1-left);
                
                cumSum-=nums[left];
                left++;
                
            }
        }
        return (result==INT_MAX)?0:result;
    }
};
