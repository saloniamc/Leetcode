class Solution {
public:
    int value(char a)
    {
        if(a == 'I')
            return 1;
        if(a == 'V')
            return 5;
        if(a == 'X')
            return 10;
        if(a == 'L')
            return 50;
        if(a == 'C')
            return 100;
        if(a == 'D')
            return 500;
        if(a == 'M')
            return 1000;  

        return -1;      
    }

    int romanToInt(string s) {

        int result = 0;

        for(int i = 0; i < s.length(); i++)
        {
            int s1 = value(s[i]);
            if(i + 1 < s.length())
            {
                int s2 = value(s[i + 1]);

                if(s1 >= s2){
                    result = result + s1;
                }
                else{
                    result = result + s2 - s1;
                    i++;
                }

            }else{
                result = result + s1;
            }
        }

        
        return result;
    }
};