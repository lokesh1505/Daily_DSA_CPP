/*
Problem: Reverse a Linked List
Approach: Iterative (3-pointer technique)
Time Complexity: O(n)
Space Complexity: O(1)

Tags: C++, Linked List, Pointers
*/

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;

    while (curr != NULL) {
        ListNode* next = curr->next; // store next
        curr->next = prev;           // reverse link
        prev = curr;                 // move prev
        curr = next;                 // move curr
    }

    return prev;
}

void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL";
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    head = reverseList(head);
    printList(head);

    return 0;
}
