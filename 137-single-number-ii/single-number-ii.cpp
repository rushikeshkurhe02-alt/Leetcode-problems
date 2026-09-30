class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n = nums.size();
        int target = 0;
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            target = nums[i];
            count = 0;

            for(int j = 0; j < n; j++)
            {
                if(target == nums[j])
                {
                    count++;
                }
            }

            if(count == 1)
            {
                return nums[i];
            }
        }

        return 0;
    }
};