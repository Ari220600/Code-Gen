#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    void insert(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr; // New node will be the last node

        if (head == nullptr)
        {
            // If the list is empty, set the new node as the head
            head = newNode;
        }
        else
        {
            // Otherwise, find the last node and append the new node
            Node *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    int mid()
    {
        Node *f = head;
        Node *s = head;
        Node *k = head;
        while (f->next != nullptr && f->next->next != nullptr)
        {
            cout << s->data << endl;
            s = s->next;
            f=f->next->next;
        }
        return s->data;
    }

    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main()
{
    LinkedList myList;

    myList.insert(10);
    myList.insert(20);
    myList.insert(30);
    myList.insert(40);
    myList.insert(50);
    myList.insert(60);
    myList.insert(70);
    myList.insert(80);
    myList.insert(90);
    myList.insert(100);
    myList.insert(110);

    std::cout << "Linked List: ";
    myList.display();

    int m = myList.mid();
    cout << "mid value is " << m;
    return 0;
}
