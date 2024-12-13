// Problem no. 21 link: https://leetcode.com/problems/merge-two-sorted-lists
#include <iostream>
#include <vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Create a dummy node to simplify handling of the merged list
        ListNode dummy;
        ListNode* current = &dummy;

        // Merge the lists by comparing the nodes
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                current->next = list1;
                list1 = list1->next;
            } else {
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }

        // Append the remaining nodes of list1 or list2
        if (list1) current->next = list1;
        if (list2) current->next = list2;

        // Return the merged list (excluding the dummy node)
        return dummy.next;
    }
};

// Helper functions for testing
ListNode* createList(const vector<int>& vals) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (int val : vals) {
        ListNode* newNode = new ListNode(val);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Example input
    vector<int> vals1 = {1, 2, 4};
    vector<int> vals2 = {1, 3, 4};

    // Create lists
    ListNode* list1 = createList(vals1);
    ListNode* list2 = createList(vals2);

    // Merge lists
    Solution solution;
    ListNode* mergedList = solution.mergeTwoLists(list1, list2);

    // Print merged list
    printList(mergedList);

    return 0;
}
