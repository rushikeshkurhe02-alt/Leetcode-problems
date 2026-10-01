class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
    int n = nums.size();
    vector <int>  lsum(n);
    vector <int> rsum(n);
    vector <int> ans(n);

    int i = 0; 
    int j = n-1;
    lsum[0] = 0;
    rsum[n-1] = 0;
    while(i<n-1){
        lsum[i+1] = lsum[i] + nums[i];
        rsum[n-i-2] = rsum[n-i-1] + nums[n-i-1];
        i++;
    }
   for(int i = 0; i<n; i++){
       ans[i] = abs(lsum[i] - rsum[i]);
   }
   return ans;
 }
};