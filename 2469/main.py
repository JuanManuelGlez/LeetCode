#Juan Manuel González Ascencio
#Leetcode #2469 from https://leetcode.com/problems/convert-the-temperature/

class Solution:
    def convertTemperature(self, celcius: float) -> list[float]:
        res = []
        farenheit= celcius * 9/5 + 32
        kelvin = celcius + 273.15
        res.append(kelvin)
        res.append(farenheit)

        return res