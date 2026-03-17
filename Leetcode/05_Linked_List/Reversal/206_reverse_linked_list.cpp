/*
Solution 1 — Iterative
*/

/*
Use three pointers:

prev
curr
next

curr->next = prev

*/

#include <iostream>
using namespace std;

/*
LeetCode 206
Reverse Linked List
*/

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:

    ListNode* reverseList(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL) {

            ListNode* nextNode = curr->next; // store next node

            curr->next = prev;               // reverse pointer

            prev = curr;                     // move prev forward
            curr = nextNode;                 // move curr forward
        }

        return prev;
    }
};


/* Helper function to print linked list */
void printList(ListNode* head) {

    while(head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }

    cout << "NULL\n";
}


/* Main function*/
int main() {

    int n;

    cout << "Enter number of nodes: ";
    cin >> n;

    if(n == 0) return 0;

    int value;

    cin >> value;
    ListNode* head = new ListNode(value);
    ListNode* temp = head;

    for(int i = 1; i < n; i++) {

        cin >> value;

        temp->next = new ListNode(value);
        temp = temp->next;
    }

    cout << "\nOriginal List:\n";
    printList(head);

    Solution obj;

    head = obj.reverseList(head);

    cout << "\nReversed List:\n";
    printList(head);

    return 0;
}

/*
Solution - 2 - Recursion
*/

/*
ListNode* reverseList(ListNode* head) {

    if(head == NULL || head->next == NULL)
        return head;

    ListNode* newHead = reverseList(head->next);

    head->next->next = head;
    head->next = NULL;

    return newHead;
}
*/

