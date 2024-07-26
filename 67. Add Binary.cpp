//When you subtract '0' from a character representing a digit, you get the integer value of that digit.
//For example, if a[i] is '1', then a[i] - '0' is 49 - 48, which equals 1.

class Solution {
public:
    string addBinary(string a, string b) {

       int i = a.size() - 1;
       int j = b.size() - 1;
       int carry = 0;
       string result = "";

       while(i >= 0 || j >= 0 || carry)
       {
        int sum = carry;

        if(i >= 0)
        {
            sum += a[i] - '0';
            i--;
        }

        if(j >= 0)
        {
            sum += b[j] - '0';
            j--;
        }

        result += sum % 2 + '0';

        carry = sum /2;
       }

       reverse(result.begin(), result.end());
        return result;
    }
};