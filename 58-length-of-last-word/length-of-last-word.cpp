class Solution {
public:
    int lengthOfLastWord(string s) {

    
    int count = 0;
    bool start = false;

    for(int i = s.length() - 1; i >= 0; i--)
    {
        // trailing spaces skip karo
        if(start == false && s[i] == ' ')
        {
            continue;
        }

        // jaise hi non-space mila, last word start
        start  = true;

        // last word ke pehle space mila
        if(s[i] == ' ')
        {
            break;
        }

        cout << s[i];
        count++;
    }

    return count;

    }
};