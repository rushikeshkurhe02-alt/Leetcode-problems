class Solution {
public:
    void sortColors(vector<int>& nums) {

        int count_of_zero = 0;
        int count_of_one = 0;
        int count_of_two = 0;

    for(int i = 0;  i< nums.size(); i++){
    
            if(nums[i] == 0){
                count_of_zero++;
            }
            else if(nums[i] == 1){
                count_of_one++;
            }
            else
             {
                count_of_two++;
             }
    }
       for(int i = 0; i< nums.size(); i++){
             if(count_of_zero != 0){
                nums[i] = 0;
                count_of_zero--;
            }
            else if(count_of_one != 0){
                nums[i] = 1;
                count_of_one--;
            }
            else
            {
                nums[i] = 2;
                count_of_two--;
            }
       }
    }
};