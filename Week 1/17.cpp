#include<vector>
#include<algorithm>
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        int z=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                z++;
            }
        }
        for(int i=0;i<z;i++){
            nums.push_back(0);
        }
    }
};