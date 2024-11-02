#Problem no. 13 link https://leetcode.com/problems/roman-to-integer/
#Optimal Solution Space Complexity O(1) Time Complexity O(n)
class Solution:
    def romanToInt(self, s: str) -> int:
        roman_values = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        
        total = 0
        prev_value = 0
        
        for char in reversed(s):
            value = roman_values[char]
            if value < prev_value:
                total -= value  # Subtract if the current value is less than the previous
            else:
                total += value  # Add if the current value is greater or equal
            prev_value = value
            
        return total

# Example usage
myclass = Solution()
print(myclass.romanToInt("III"))     # Output: 3
print(myclass.romanToInt("LVIII"))   # Output: 58
print(myclass.romanToInt("MCMXCIV")) # Output: 1994
