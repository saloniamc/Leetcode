class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int len1 = haystack.length();
        int len2 = needle.length();

        int nIndex = 0;

        for(int i = 0; i < len1; i++)
        {
            if(haystack[i] == needle[nIndex])
            {
                nIndex++;
            }else{
                //To start matching again from the index just after the one from which we had started matching the string.
                i = i - nIndex;
                //to reset the needle index
                nIndex = 0;
            }

            //if needle ends
            if(len2 == nIndex)
            {
                return i - nIndex + 1;
            }
        }

        return -1;
    }

};