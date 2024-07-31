/*
    Newton-Raphson Method for Square Root(or Heron's method):
	- This method is iterative and can converge very quickly to the square root, especially started with a good 	initial guess. 
	- The Newton-Raphson method is based on iterative refinement. For the square root problem, the method uses the 	following formula:
	
	x(new) = ( x(old) + N / x(old) ) / 2
	
	where N is the number for which we are finding the square root.
		
*/


class Solution {
public:
    int mySqrt(int x) {
        if(x < 2) return x;

        long long ans = x;
        while(ans * ans > x){
            ans = (ans + (x / ans)) / 2;
        }

        return static_cast<int>(ans);
    }
};