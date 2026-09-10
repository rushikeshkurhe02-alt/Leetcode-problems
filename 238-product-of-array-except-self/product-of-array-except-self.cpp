class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> left_prod(n);
        vector<int> right_prod(n);
        vector<int> answer(n);

        int product_left = 1;
        int product_right = 1;

        // Left products
        for(int i = 0; i < n; i++)
        {
            left_prod[i] = product_left;
            product_left = product_left * nums[i];
        }

        // Right products
        for(int i = n - 1; i >= 0; i--)
        {
            right_prod[i] = product_right;
            product_right = product_right * nums[i];
        }

        // Answer
        for(int i = 0; i < n; i++)
        {
            answer[i] = left_prod[i] * right_prod[i];
        }

        return answer;
    }
};