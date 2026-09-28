class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();

        int i = 0;
        int j = i + 1;

        while(j < n) {

            if(nums[i] != nums[j]) {
                return nums[i];
            }
            else {
                i = i + 2;
                j = j + 2;
            }
        }

        return nums[i];
    }
};