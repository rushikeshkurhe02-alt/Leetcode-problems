class Solution {
public:
    bool checkDivisibility(int n) {

        int orig = n;
        int count = 0;

        while(n != 0) {
            n = n / 10;
            count++;
        }

        n = orig;

        int sum = 0;
        int pro = 1;

        for(int i = 0; i < count; i++) {
            int digit = n % 10;

            sum = sum + digit;
            pro = pro * digit;

            n = n / 10;
        }

        if(orig % (sum + pro) == 0)
            return true;
        else
            return false;
    }
};