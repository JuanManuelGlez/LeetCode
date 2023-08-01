//Juan Manuel González Ascencio
//Leetcode #2469 from https://leetcode.com/problems/convert-the-temperature/
// comando para compilar: g++ main.cpp -o ./app

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<double> convertTemperature(double celsius) {
        
        vector<double> res; // Declaramos vector de doubles para guardar los resultados


        //Se hacenlas operaciones para convertir de celsius a farenheit y kelvin
        double farenheit = (celsius * 9/5) + 32;
        double kelvin = celsius + 273.15;
        
        //Se agregan los resultados al vector
        res.push_back(farenheit);
        res.push_back(kelvin);

        return res;
        }
};

int main(){
    Solution sol;
    double celsius = 0;
    vector<double> res = sol.convertTemperature(celsius);
    cout << "Farenheit: " << res[0] << endl;
    cout << "Kelvin: " << res[1] << endl;
    return 0;
}