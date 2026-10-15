class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s.length() != t.length()){
            return false;
        }

         int i = 0;
         bool val = false;
        while(i<s.length()){
            if(s[i] == t[i]){
                val = true;
                i++;
            }
            else{
                   return false;
            }
        }

        if(val == true){
            return true;
        }
        else{
            return false;
        }
    }
};