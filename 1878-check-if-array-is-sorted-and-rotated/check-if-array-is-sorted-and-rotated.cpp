class Solution {
public:
    bool check(vector<int>& nums) {

    
    int n = nums.size();

    int b[n];

    // Step 1: Copy nums into b
    for(int i = 0; i < n; i++){
        b[i] = nums[i];
    }

    // Step 2: Sort b
    sort(b, b + n);

    // Step 3: Check if nums is already sorted
    bool x = false;

    for(int i = 0; i < n; i++){
        if(nums[i] != b[i]){
            x = false;
            break;
        }
        else{
            x = true;
        }
    }

    // Already sorted
    if(x == true){
        return true;
    }
    else{

        int count = 0;

        // Count breaks
        for(int i = 0; i < n - 1; i++){
            if(nums[i] > nums[i + 1]){
                count++;
            }
        }

        // Last element to first element
        if(nums[n - 1] > nums[0]){
            count++;
        }

        // Valid rotated sorted array
        if(count <= 1){
            return true;
        }
        else{
            return false;
        }
    }



    }
};