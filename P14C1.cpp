class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
           int n =nums.size();
        int length=0;
        int mini=INT_MAX;
        int sum=0;
        int i=0;
        int j=0;
        
        while(i<n && j<n){
            sum+=nums[i];
            if(sum>=target){
                mini=min(i-j+1,mini);
                while(sum>=target && j<=i){
                      mini=min(i-j+1,mini);
                    sum=sum-nums[j];
                    j++;
                }
            }
            i++;
        }
       if(mini==INT_MAX){
            return 0;
       }
        return mini;
    }
};