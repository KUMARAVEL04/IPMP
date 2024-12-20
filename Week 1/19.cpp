#include<vector>
#include<algorithm>
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        int z=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }
            else{
                z++;
            }
        }
        for(int i=0;i<z;i++){
            temp.push_back(0);
        }
        nums=temp;
    }
};