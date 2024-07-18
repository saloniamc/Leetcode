/*   TLE
class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int len = height.size();

        for(int i = 0 ; i < len; i++)
        {
            for(int j = i + 1; j < len; j++)
            {
                area = max(area, min(height[i], height[j]) * ( j - i));
            }
        }

        return area;
    }
};

*/


class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max_area = 0;

        while(left < right)
        {
            int width = right - left;
            int current_height = min(height[left], height[right]);
            int current_area = current_height * width;
            max_area = max(max_area, current_area);

            if(height[left] < height[right])
            {
                left++;
            }else{
                right--;
            }
        }

        return max_area;
    }
};