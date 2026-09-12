class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {

        vector<int> answer;

        int rows = matrix.size();
        int cols = matrix[0].size();

        int luck1, col, luck2;

        for(int i = 0; i < rows; i++)
        {
            // Find minimum in row
            luck1 = INT_MAX;

            for(int j = 0; j < cols; j++)
            {
                if(luck1 > matrix[i][j])
                {
                    luck1 = matrix[i][j];
                    col = j;
                }
            }

            // Find maximum in that column
            luck2 = INT_MIN;

            for(int k = 0; k < rows; k++)
            {
                if(luck2 < matrix[k][col])
                {
                    luck2 = matrix[k][col];
                }
            }

            // Check lucky number
            if(luck1 == luck2)
            {
                answer.push_back(luck1);
            }
        }

        return answer;
    }
};