//XORIng a number with itself results in cancelling out the number while
        // XORing with zero results in the number itself.

class Solution {
public:
    int singleNumber(vector<int>& nums) { 
        int singleNumber = 0;
        for(int num : nums)
        {
            singleNumber ^= num;
        }
        return singleNumber;
        
    }
};