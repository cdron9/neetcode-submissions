class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_map<int, int> freqmap;

       for (int num : nums) {
            // count how many times value has been seen 
            // at each key
            freqmap[num]++;
            // if has been seen more than once return true
            if (freqmap[num] > 1) {
                return true;
            }
       }

       return false;
    }
};