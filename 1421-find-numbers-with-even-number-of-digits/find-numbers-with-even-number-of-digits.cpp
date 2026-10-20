class Solution {
public:

int count ;
int count2 = 0;
    int findNumbers(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            count = 0;
            while (nums[i] > 0) {
                count++;
                nums[i] = nums[i] / 10;
            }
            if(count % 2 == 0){
                count2++;
            }
        }
        return count2;
    }
};