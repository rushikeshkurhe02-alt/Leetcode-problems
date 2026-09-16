class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
   int n = nums.size();
   sort(nums.begin(), nums.end());
   int min_diff =  INT_MAX;
   int diff = 0;
   for(int i = 0; i<=n-k; i++){

    diff = nums[i+k-1] -nums[i];

    if(diff < min_diff)
      min_diff = diff;

   }
    return min_diff;
    }
};