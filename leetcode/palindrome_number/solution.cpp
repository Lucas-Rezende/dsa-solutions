#include "libs.hpp"

class Solution {
public:
    bool isPalindrome(int x) {
        string aux = to_string(x);
        int count = aux.size() - 1;

        if (((x < 0) || (aux[count] == 0 && aux != "0"))) return false;

        for(int i = 0; i < aux.size() / 2; i++) {
            if(aux[i] == aux[count]) {
                count--;
            } else {
                return false;
            }
        }
        return true;
    }
};