class Solution {
public:
    int firstUniqChar(string s) {
        
        int freq[26] = {0};

        for(int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            int index = ch - 'a';

            freq[index]++;
        }

        for(int i = 0; i < s.length(); i++)
        {
            if(freq[s[i] - 'a'] == 1)
            {
                return i;
            }
        }

        return -1;
    }
};