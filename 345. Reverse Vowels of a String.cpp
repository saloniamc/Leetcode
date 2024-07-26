/*
class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.size()-1;
        while(i < j)
        {
            if(isVowel(s[i]))
            {
                if(isVowel(s[j]))
                {
                    swap(s[i], s[j]);
                    i++;
                    j--;
                } else{
                    j--;
                }                
            }else{
                i++;
            }
        }
        return s;
    }

private:
    bool isVowel(char ch)
    {
        char c = tolower(ch);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

};
*/

//////   reducing lookup time for vowels using unordered set 
//       Using unordered_set for Vowels: unordered_set provides average O(1) time complexity for lookups, making it
//	efficient for checking if a character is a vowel.




class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        int i = 0, j = s.size() - 1;
        while(i < j)
        {
            if(vowels.find(s[i]) != vowels.end())
            {
                if(vowels.find(s[j]) != vowels.end())
                {
                    swap(s[i], s[j]);
                    i++;
                    j--;
                }else{
                    j--;
                }
                
            }else{
                i++;
            }
        }
        return s;
    }

};
