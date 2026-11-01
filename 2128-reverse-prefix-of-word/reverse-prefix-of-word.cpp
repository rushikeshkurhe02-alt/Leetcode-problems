class Solution {
public:
    string reversePrefix(string word, char ch) {
        

        string ans;
        int n = word.length();
        bool flag = false;
        int count = 0;
        for(int  i = 0; i<word.length(); i++){
            if(word[i] == ch){
               count = i;
               flag = true;
               break;
            }
        }
        if(flag == true){
         for(int  i = count; i>=0;  i--){
                ans += word[i]; 
                         
          }
          for(int i = count+1; i<n;  i++){
                ans += word[i]; 
                         
          }
        }
        else{
             for(int  i = 0; i<word.length(); i++){
                ans += word[i];           
          }
        }
        return ans;
    }
};



