class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i] == target){
                return i;
            }
            else if(nums[i] > target){
                return i;
            }
            else if(target <nums[0]){
                return 0;
            }
            
        }
        return n;
    }
};