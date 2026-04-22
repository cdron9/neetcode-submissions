class Solution {
public:
    bool isAnagram(string s, string t) {
        // brute thought, assign value to all letters, count value, chekc if same. 

        // same solution as 'has duplicate' using strings instead now. 

        // check string length, quick return false if not matching
        if (s.size() != t.size()) return false;

        unordered_map<char, int> freqmap;

        // increment on one string and decrement the other
        // if final int == 0, strings match
        for (char c : s) {
            freqmap[c]++;
        }

        
        for (char c : t) {
            freqmap[c]--;
            if (freqmap[c] < 0) {
                return false;
            }
        }
        return true;
    }
};
