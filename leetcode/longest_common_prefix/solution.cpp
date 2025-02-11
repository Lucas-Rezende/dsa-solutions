#include "libs.hpp"

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            if (strs.empty()) return "";
            else if (strs.size() == 1) return strs[0];
    
            string mcp_temp = strs[0];
            string answer;
    
            for (int i = 1; i <= strs.size() - 1; i++) {
                if(strs[i].empty()) return "";
    
                int current_letter = 0;
                answer = "";
                while (current_letter <= strs[i].size() - 1) {
                    if (mcp_temp[current_letter] == strs[i][current_letter]) {
                        answer.push_back(mcp_temp[current_letter]);
                    } else {
                        break;
                    }
                    current_letter++;
                }
    
                if(answer.empty()) return "";
                mcp_temp = answer;
            }
    
            return answer;
        }
};