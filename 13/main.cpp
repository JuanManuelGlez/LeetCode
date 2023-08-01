//Juan Manuel González Ascencio
//Leetcode #13 from https://leetcode.com/problems/roman-to-integer/
// comando para compilar: g++ main.cpp -o ./app

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int values(char c){
        switch(c){
            case 'I': return 1; break;
            case 'V': return 5; break;
            case 'X': return 10; break;
            case 'L': return 50; break;
            case 'C': return 100; break;
            case 'D': return 500; break;
            case 'M': return 1000; break;
        }
        return -1;
    }

    int Roman2Int(string s){
        int res = 0;
        for (int i=0; i<s.length(); i++){
            int s1 = values(s[i]);


            if (i+1 < s.length()){ //if there is a next character
                int s2 = values(s[i+1]); //get the value of the next character
                if (s1 >= s2){ //if the value of the current character is greater than the next one
                    res += s1; //add the value of the current character
                }
                else{
                    res += s2 - s1; //if the value of the current character is less than the next one, add the difference
                    i++;
                }
            }
            else{
                res += s1;
            }
        }
        return res;
    }


};


int main(){
    Solution sol;
    string s = "MCMXCIV";
    cout << sol.Roman2Int(s) << endl;
    return 0;
}