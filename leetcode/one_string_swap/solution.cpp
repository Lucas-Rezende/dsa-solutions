// Problem 1790. Check if One String Swap Can Make Strings Equal

#include "libs.hpp"

class Solution {
    public:
        bool areAlmostEqual(string s1, string s2) {
            if (s1 == s2) return true;
            
            int pos_s, pos_e;
            vector<int> pos;
    
            for (int i = 0; i <= s1.size() - 1; i++) {
                if (s1[i] != s2[i]) {
                    pos.push_back(i);
                }
            }
    
            if(pos.size() == 2) {
                pos_s = pos[0];
                pos_e = pos[1];
                swap(s2[pos_s], s2[pos_e]);
                if(s1 == s2) return true;
            }
    
            return false;
        }
};