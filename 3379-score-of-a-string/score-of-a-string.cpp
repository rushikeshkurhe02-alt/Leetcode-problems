class Solution {
public:
    int scoreOfString(string s) {

 int total = 0;
 for(int i = 0; i < s.length()-1; i++) {

    total = total  + abs((int)s[i] - (int)s[i+1]);
    
  }  
    return total;
}
};