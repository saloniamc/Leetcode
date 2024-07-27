class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int haystackLen = haystack.size();
        int needleLen = needle.size();

        if(needleLen == 0 || haystackLen < needleLen) return (-1);

        for(int i = 0 ; i <= haystackLen - needleLen; i++)
        {
            int j = 0;
            while(j < needleLen && haystack[i + j] == needle[j])
            {
                j++;
            }
            if(j == needleLen)
                return i;
        }
        

        return (-1);
    }
};