#include "libs.hpp"

class Solution {
    public:
        int romanToInt(string s) {
            int value = 0;
            int i = 0;
    
            while (i < s.size()) {
                if (s[i] == 'I' && s[i+1] != 'V' && s[i+1] != 'X') {
                    value += 1;
                    i += 1;
                } else if (s[i] == 'I' && s[i+1] == 'V') {
                    value += 4;
                    i += 2;
                } else if (s[i] == 'I' && s[i+1] == 'X') {
                    value += 9;
                    i += 2;
                } else if (s[i] == 'V') {
                    value += 5;
                    i += 1;
                } if (s[i] == 'X' && s[i+1] != 'L' && s[i+1] != 'C') {
                    value += 10;
                    i += 1;
                } else if (s[i] == 'X' && s[i+1] == 'L') {
                    value += 40;
                    i += 2;
                } else if (s[i] == 'X' && s[i+1] == 'C') {
                    value += 90;
                    i += 2;
                } else if (s[i] == 'L') {
                    value += 50;
                    i += 1;
                } if (s[i] == 'C' && s[i+1] != 'D' && s[i+1] != 'M') {
                    value += 100;
                    i += 1;
                } else if (s[i] == 'C' && s[i+1] == 'D') {
                    value += 400;
                    i += 2;
                } else if (s[i] == 'C' && s[i+1] == 'M') {
                    value += 900;
                    i += 2;
                } else if (s[i] == 'D') {
                    value += 500;
                    i += 1;
                } else if (s[i] == 'M') {
                    value += 1000;
                    i += 1;
                }
            }
    
            return value;
        }
    };