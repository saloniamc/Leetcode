class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> result;

        for(int row = 0; row < numRows; row++)
        {
            vector<int> currentLine;
            for(int i = 0; i <= row; i++)
            {
                if( row == i || i == 0)
                {
                    currentLine.push_back(1);
                }
                else
                {
                    currentLine.push_back(result[row-1][i-1] + result[row-1][i]);
                }
            }

            result.push_back(currentLine);
        }
        return result;
    }
};