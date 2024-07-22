#include<cmath>
#include<limits>

class Solution {
public:
    double myPow(double x, int n) {
        double answer = 0, b = 0;
        if(n == 1)
            return (x);

        if(n == 0)
            return (1);

        if( n < 0)
        {
            if(n == std::numeric_limits<int>::min())
            {
                n = std::numeric_limits<int>::max();
                x = 1 / (x * x);
            } else {
                x = 1 / x;
                n = -n;
            }
        }

        b = myPow(x, n/2);
        answer = b * b;

        const double MAX_RESULT = 1e4;
        const double MIN_RESULT = -1e4;

        if (answer > MAX_RESULT) {
            return MAX_RESULT;
        } else if (answer < MIN_RESULT) {
            return MIN_RESULT;
        }

        if(n%2 != 0)
            answer *= x;
            
        return answer;
    }
};