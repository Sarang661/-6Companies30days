class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         if(k<=1) {
             return 0;
         }
        int n =nums.size();
        int i=0;
        int j=0;
        int product=1;
        int numSubarray =0;
        for(int t=0;t<n;t++){
            product=product*nums[t];
                while(product>=k && i<n){
                    product=product/nums[i];
                    i++;
                }
                numSubarray+=(j-i+1);
                
            
            j++;
        }
        return numSubarray;
    }
};