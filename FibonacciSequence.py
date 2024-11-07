# Problem no 509 link https://leetcode.com/problems/fibonacci-number/
# Time Complexity: O(n)
class Solution(object):
    def fib(self, n):
        # Base cases
        if n == 0:
            return 0
        elif n == 1:
            return 1
        
        # Initialize the first two Fibonacci numbers
        a, b = 0, 1
        
        # Iterate from 2 to n, updating the Fibonacci numbers
        for i in range(2, n + 1):
            a, b = b, a + b
        
        # Return the nth Fibonacci number
        return b

myclass = Solution()
print(myclass.fib(2))
print(myclass.fib(3))
print(myclass.fib(4))