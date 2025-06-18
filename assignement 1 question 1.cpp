class Solution {
public:
    void check_for_element(vector<int>& nums1, vector<int>& nums2, int a,
                           vector<int>& result) {
        int count = 0;
        for (int i = a + 1; i < nums2.size(); i++) {
            if (nums2[i] > nums2[a]) {
                int e = nums2[i];
                result.push_back(e);
                count++;
                break;
            } } 
        if (count == 0)
            result.push_back(-1);
        return;
    }
    void find(vector<int>& nums1, vector<int>& nums2, int b,
                   vector<int>& result) {
        if (b < nums1.size()) {
            int a = 0;
            for (int i = 0; i < nums2.size(); i++) {
                if (nums2[i] == nums1[b]) {
                    a = i;
                    break;
                }}
            check_for_element(nums1, nums2, a, result);
            find(nums1, nums2, b + 1, result);
        }
        return;  }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int b = 0;
        vector<int> result;
        find(nums1, nums2, b, result);
        return result; }
};