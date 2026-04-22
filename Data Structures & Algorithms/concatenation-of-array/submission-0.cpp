class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // set n = size of nums arr
        int n = nums.size();
        vector<int> ans(2*n);
        // set ans arr to 2n

        // iterate through both arrays setting i+n to i
        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];
            ans[i + n] = nums[i];
        }
        return ans;
    }
};