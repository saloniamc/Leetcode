class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

       return binSearch(nums, start, end, target);
        
    }
private:
    int binSearch(vector<int>& nums, int start, int end, int target)
    {
        while(start <= end)
        {
            int mid = start + (end-start)/2;
             if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return start;
    }
};