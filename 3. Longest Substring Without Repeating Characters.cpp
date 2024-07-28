class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    
    unordered_set<char> charSet;
    int maxLength = 0;
    int start = 0;
    int end = 0;

    while (end < s.length()) {
        if (charSet.find(s[end]) == charSet.end()) {
            // Character not in the set, add it and expand the window
            charSet.insert(s[end]);
            maxLength = max(maxLength, end - start + 1);
            end++;
        } else {
            // Character in the set, remove the leftmost character and shrink the window
            charSet.erase(s[start]);
            start++;
        }
    }

    return maxLength;
    }
};