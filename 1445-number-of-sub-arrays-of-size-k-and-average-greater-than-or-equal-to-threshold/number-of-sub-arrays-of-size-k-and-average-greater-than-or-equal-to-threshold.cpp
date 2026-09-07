class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
    int n = arr.size();
    int sum = 0;
    int avg = 0;
    int count = 0;

    for(int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    avg = sum / k;

    if(avg >= threshold)
        count++;

    for(int i = 1; i <= n-k; i++)
    {
        sum = sum - arr[i-1] + arr[i+k-1];

        avg = sum / k;

        if(avg >= threshold)
            count++;
    }
    return count;
    }
};