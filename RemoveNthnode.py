# Problem no. 19 link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/

from typing import Optional


# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        dummy = ListNode()
        dummy.next = head
        behind = ahead = dummy

        for _ in range(n+1):
            ahead = ahead.next 
        
        while ahead:
            behind = behind.next
            ahead = ahead.next
        
        behind.next = behind.next.next
        return dummy.next


# Usage 
"""
Example 1:
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

Example 2:
Input: head = [1], n = 1
Output: []

Example 3:
Input: head = [1,2], n = 1
Output: [1]
"""

# Main function
if __name__ == "__main__":
    # Create a linked list from the input
    head = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))
    n = 4
    solution = Solution()
    result = solution.removeNthFromEnd(head, n)
    
    # Print the result in a more readable way
    current = result
    output = []
    while current:
        output.append(str(current.val))
        current = current.next
    print("->".join(output))