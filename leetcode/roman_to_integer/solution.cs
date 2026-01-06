using System;
using System.Collections.Generic;

public class Solution
{
    public int RomanToInteger(string s)
    {
        Dictionary<char, int> romanNumbers = new Dictionary<char, int> {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        }
        int arabicNumeral = 0;

        for (int i = 0; i < s.Length - 1; i++)
        {
            int currentValue = romanNumbers[s[i]];
            int nextValue = romanNumbers[s[i+1]];

            if (currentValue >= nextValue) { arabicNumeral += currentValue}
            else
            {
                arabicNumeral += (currentValue - nextValue); i++;
            }

        }
        return arabicNumeral;
    }
}
