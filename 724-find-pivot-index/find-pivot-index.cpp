class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    
    int n = nums.size();
    int left_sum = 0;
    int right_sum = 0;
    int j , k;

    for(int i = 0; i<n; i++){
        j = i +1;
        k = i - 1;

        while(j < n){
            right_sum += nums[j];
             j++;
        }
       
        while(k >=0){
            left_sum += nums[k];
            k--;
        }
       

        if(left_sum == right_sum)
           return i;
        
        left_sum =0;
        right_sum = 0;
    }
         return -1;
    }
};