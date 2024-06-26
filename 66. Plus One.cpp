class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1, sum = 0 ;

        for(int i = digits.size() - 1; i >=0; i--)
        {
            sum = digits[i] + carry;
            carry = sum / 10;
            digits[i] = sum % 10;

            if(carry == 0)
                return digits;

             if(carry != 0)
                continue;
        }

        if(carry != 0)
        {
            digits.insert(digits.begin(), carry);
        }    

        return digits;
    }
};