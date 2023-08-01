# Juan Manuel González Ascencio
# Leetcode #13 from https://leetcode.com/problems/roman-to-integer/

class Solution:
    def romanToInt(self, s: str) -> int:
        # Dictionary with the values of each roman numeral
        roman = {"I": 1, "V": 5, "X":10, "L": 50, "C":100, "D":500, "M":1000}

        res = 0
        for i in range(len(s)):
            #si el numero actual es menor que el siguiente se resta
            if (i+1 < len(s) and roman[s[i]] < roman[s[i+1]]):
                res -= roman[s[i]]
            #si el numero actual es mayor o igual que el siguiente se suma
            else:
                res += roman[s[i]]

        return res
    

