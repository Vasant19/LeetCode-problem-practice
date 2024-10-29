# Problem no. 9 link https://leetcode.com/problems/palindrome-number/
# Optimal Solution
def is_palindrome(x: int) -> bool:
    if x < 0 or (x % 10 == 0 and x != 0):
        return False
    
    reversed_half = 0
    while x > reversed_half:
        reversed_half = reversed_half * 10 + x % 10
        x //= 10
    

    return x == reversed_half or x == reversed_half // 10


x = int(input("Enter a number: "))
print(is_palindrome(x))