class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for (int i=0; i<nums.size(); i++){
            for (int j=i+1; j<nums.size();){
                if (nums[i]==nums[j]){
                    nums.erase(nums.begin() + j);
                }else{
                    j++;
                }
            }
        }
        return nums.size();
    }
};
