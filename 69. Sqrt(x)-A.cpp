/*
Prevent Overflow:

In C++, the int type typically has a maximum value of 
2^31 − 1 (about 2 billion). When performing operations like squaring a number, the result can exceed this limit, leading to overflow.
For instance, if mid is close to the upper limit of int, squaring it might result in a number that cannot be represented by int, causing incorrect results.


long long (has a maximum value of 2^63 − 1) 

Issue:

If mid is an int, the result of mid * mid (which is 2147488281) will overflow because it's larger than 
2^31 − 1

*/


class Solution {
public:
    int mySqrt(int x) {
        if(x < 2) return x;

        int low = 2; int high = x/2;
        while(low <= high)
        {
            int mid = low + (high - low)/ 2;
            long long midSquared = static_cast<long long>(mid) * mid;

            if(midSquared == x){
                return mid;
            }else if(midSquared < x){
                low = mid + 1;
            }else{    
                high = mid - 1;
            }
        }

        return high;
    }
};