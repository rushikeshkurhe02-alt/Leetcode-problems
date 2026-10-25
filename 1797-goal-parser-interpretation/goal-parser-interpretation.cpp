class Solution {
public:
    string interpret(string command) {
        string ans;
        int i = 0;
        while(i < command.length()){
            if(command.substr(i, 2) == "()"){
                ans = ans + "o";
                i++;
            }
            else if(command.substr(i, 4) == "(al)"){
                ans = ans + "al";
                i=i+3;
            }
            else{
            ans = ans + "G";
            }
            i++;
        }
        return ans;
    }
};