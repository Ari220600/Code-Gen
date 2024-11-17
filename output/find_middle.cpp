#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
};

int findMiddle(node* head) {
    if (head == NULL || head->next == NULL) return -1;
    node* slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}

int main() {
    node* head = new node();
    head->data = 1;
    head->next = new node();
    head->next->data = 2;
    head->next->next = new node();
    head->next->next->data = 3;
    head->next->next->next = NULL;
    cout << findMiddle(head) << endl; // Output: 2
    return 0;
}