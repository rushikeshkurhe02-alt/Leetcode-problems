class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
int total = 0;
int max ;


for(int i = 0; i <accounts.size(); i++){
    max = 0;
     for(int j = 0; j<accounts[i].size(); j++){
         max = max + accounts[i][j];
     }
    if(max > total){
        total = max;
    }
}

return total;


    }
};