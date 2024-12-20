class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxsum=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(i==nums.size()-1||nums[i]>=nums[i+1]){
                if(maxsum<sum){
                    maxsum=sum;
                }
                sum=0;
            }
        }
        if(sum>maxsum){
            maxsum=sum;
        }
        return maxsum;        
    }
};