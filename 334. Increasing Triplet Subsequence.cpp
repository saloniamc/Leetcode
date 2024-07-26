class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.empty() || (nums.size() == 1) || (nums.size() ==2))
        {
            return false;
        }

        int first = INT_MAX;
        int second = INT_MAX;
        for(int n : nums)
        {
            if(n <= first)
            {
                first = n;
            }else if(n <= second){
                second = n;
            }else{
                return true;
            }
        }

        return false;
    }
};