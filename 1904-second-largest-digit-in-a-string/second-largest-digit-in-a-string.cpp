class Solution {
public:

    vector <int> arr;
    int secondHighest(string s) {
        for(int i = 0; i<s.length(); i++){
            if(isdigit(s[i])){
                arr.push_back(s[i] - '0');
            }
        }
        int max = -1;

        for(int i = 0; i<arr.size(); i++){
            if(arr[i]  > max){
                max = arr[i];
            }
        }
        int sec_max = -1;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] > sec_max && arr[i] < max){
                sec_max = arr[i];
            }

        }

        return sec_max;
    }
};