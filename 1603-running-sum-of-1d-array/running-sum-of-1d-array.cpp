class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> ans;
        int count = nums[0];
        ans.push_back(nums[0]);
        for(int i = 1; i<nums.size(); i++){
        
            ans.push_back(count + nums[i]);
             count = count + nums[i];
        }
        return ans;
    }
};