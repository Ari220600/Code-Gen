// Find the middle number of a linked list
int findMiddle(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    int mid = count / 2;
    current = head;
    for (int i = 0; i < mid; i++) {
        current = current->next;
    }
    return current->data;
}
