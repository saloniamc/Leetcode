class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> result(m + n);

        int i = 0; int j = 0; int k = 0;
        while(i < m && j < n)
        {
            if(nums1[i] < nums2[j])
            {
                result[k++] = nums1[i++];
            } else{
                result[k++] = nums2[j++];
            }
        }

        while(i < m) result[k++] = nums1[i++];
        while(j < n) result[k++] = nums2[j++];

        return median(result);
    }

private:
    double median(vector<int> &result)
    {
        int size = result.size();
        int mid = size/2;

        if(size % 2 == 0)
        {
            return  (result[mid-1] + result[mid])/2.0;
        }else{
            return result[mid];
        }
    }
};