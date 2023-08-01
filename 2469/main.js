/**
* @param {number} celsius
* @return {number[]}
*/
var convertTemperature = function(celsius) {
   let kelvin = celsius +273.15;
   let farenheit = celsius * 9/5 + 32;
   return[kelvin, farenheit]
};