//  This function finds the middle number in a linked list.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int findMiddle(Node* head) {
    if (head == NULL)
        return -1;

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node();
    head->data = 1;
    head->next = new Node();
    head->next->data = 2;
    head->next->next = new Node();
    head->next->next->data = 3;
    head->next->next->next = new Node();
    head->next->next->next->data = 4;
    head->next->next->next->next = new Node();
    head->next->next->next->next->data = 5;
    head->next->next->next->next->next = NULL;

    int middleNumber = findMiddle(head);

    cout << "The middle number is: " << middleNumber << endl;

    return 0;
}