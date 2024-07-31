/*
Approach
The number of unique BSTs for n nodes can be determined using the Catalan number. This can be efficiently computed using dynamic programming.

Key Idea:
The number of unique BSTs for n nodes can be derived from smaller subproblems. Specifically, if you choose a node as the root, the left subtree will contain the nodes smaller than the root, and the right subtree will contain the nodes larger than the root. The number of unique BSTs for a given root depends on the number of unique BSTs for its left and right subtrees.

Recursive Formula
The recursive formula for the number of unique BSTs, numTrees(n), is given by:

 			                 n
			numTrees(n) =    ∑  ( numTrees(i− 1)  ×  numTrees(n−i) )
  			                i=1  

*/



class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n+1, 0);
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2; i <= n; ++i){
            for(int j = 1; j <= i; ++j){
                dp[i] += dp[j - 1] * dp[i - j];
            }
        }

        return dp[n];
    }
};