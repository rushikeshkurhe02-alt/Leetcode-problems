class Solution { 
public: 
    double findMaxAverage(vector<int>& nums, int k) { 
        
        int n = nums.size(); 
        double sum = 0; 
        double max_avg = INT_MIN;
        double avg = 0; 

        for(int i = 0; i < k; i++){
            sum += nums[i];
        }

        avg = sum / k;

        if(max_avg < avg)
            max_avg = avg;
        
        for(int i = 1; i <= n-k; i++){
            
            sum = sum - nums[i-1] + nums[i+k-1];

            avg = sum / k;

            if(max_avg < avg)
                max_avg = avg;
        }

        return max_avg;
    }     
};