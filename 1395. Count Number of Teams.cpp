class Solution {
public:
    int numTeams(vector<int>& rating) {
        int result = 0;
        int n = rating.size();
        int teamsCount = 0;
        for(int i = 1; i < n; ++i)
        {
            int leftSmaller = 0, rightLarger = 0;
            int leftLarger = 0, rightSmaller = 0;

            for(int j = 0; j < i; ++j)
            {
                if(rating[j] < rating[i]) leftSmaller++;
                if(rating[j] > rating[i]) leftLarger++;
            }

            for(int k = i+1; k < n; ++k)
            {
                if(rating[k] < rating[i]) rightSmaller++;
                if(rating[k] > rating[i]) rightLarger++;
            }

            teamsCount += leftSmaller * rightLarger;
            teamsCount += leftLarger * rightSmaller;

        }

        return teamsCount;
    }
};